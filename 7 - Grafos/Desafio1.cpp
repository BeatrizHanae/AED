//Beatriz Hanae Fujimoto - 160113814

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector< vector<int> > FormAdjMatrix()
    {
//lista de adjacencias;
    vector< vector<int> > adjMatrix;
    
    const int n = 6;
    
    // Inicializa a matriz para todos os 0;
    for(int i = 0; i < n; i++)
        {
        vector<int> row;
        adjMatrix.push_back(row);
        for(int j = 0; j < n; j++)
            {
            adjMatrix[i].push_back(0);
            }
        }
    
    // Primeiro numero er o vertice, o segundo er a capacidade da aresta;
    adjMatrix[0][1] = 15;
    adjMatrix[0][2] = 12;
    adjMatrix[1][2] = 9;
    adjMatrix[1][3] = 11;
    adjMatrix[2][1] = 5;
    adjMatrix[2][4] = 13;
    adjMatrix[3][2] = 9;
    adjMatrix[3][5] = 25;
    adjMatrix[4][3] = 8;
    adjMatrix[4][5] = 6;
    
    // o grafica como uma lista de adjacência;
    return adjMatrix;
    }

//Uma versão especial do BFS que retorna true se houver um caminho da origem para o coletor.
bool BFS(vector< vector<int> > &resAdjMatrix, int &source, int &sink, vector<int> &parent)
    {
    // Crie uma matriz para todos os nós que visitamos. Inicializado para falso.
    int n = resAdjMatrix.size();
    bool visited[n] = { false };
        
    // Crie uma fila para verificar cada nó.
    queue<int> q;
    
    // Empurre a nossa fonte na fila e marcá-lo como visitado. Não tem pai.
    q.push(source);
    visited[source] = true;
    parent[source] = -1;
        
    //Continue visitando vértices.
    while(q.empty() == false)
        {
        int u = q.front();
        q.pop();
        
        // Verifica todos os amigos
        for(int i = 0; i < n; i++)
            {
            int v = i;
            int capacity = resAdjMatrix[u][v];
            
            // Encontramos um vizinho que não foi visitado e a capacidade é maior que 0.
            if(visited[v] == false && capacity > 0)
                {
                // Encontramos um vizinho que não foi visitado e a capacidade é maior que 0.
                q.push(v);
                parent[v] = u;
                visited[v] = true;
                }
            }
        }
        
    //Se a sink foi visitado, em seguida, encontramos um caminho para ele.
    if(visited[sink] == true) 
        { return true; }
        
    return false;
    }

int FordFulkerson(vector< vector<int> > &adjMatrix, int &source, int &sink)
    {
    int maxflow = 0;
    
    // 1. Crie o gráfico residual. (Igual ao gráfico original.)
    vector< vector<int> > resAdjMatrix;
    int n = adjMatrix.size();
    for(int i = 0; i < n; i++)
        {
        vector<int> row;
        resAdjMatrix.push_back(row);
        for(int j = 0; j < adjMatrix[i].size(); j++)
            {
            resAdjMatrix[i].push_back(adjMatrix[i][j]);
            }
        }
    
    // 2. Crie uma matriz pai vazia para o BFS para armazenar o caminho de aumento.
    vector<int> parent;
    for(int i = 0; i < n; i++)
        {
        parent.push_back(-1);
        }
    
    // 3. Continue chamando o BFS para verificar se há um caminho para aumentar (da fonte até o coletor ...
    while(BFS(resAdjMatrix, source, sink, parent) == true)
        {
        //4. Encontre o fluxo máximo através do caminho que acabamos de encontrar.
        int pathflow = 10000007;
        
        //Siga o caminho que acabamos de encontrar. Iterar pelo caminho.
        int v = sink;
        while(v != source)
            {
            int u = parent[v];
            
            // Atualize o fluxo de caminho para essa capacidade, se for menor
            int capacity = resAdjMatrix[u][v];
            pathflow = min(pathflow, capacity);
            
            //Configure para a próxima aresta no caminho.
            v = u;
            }
        
        // 5. Atualize as capacidades residuais das arestas e arestas reversas.
        v = sink;
        while(v != source)
            {
            int u = parent[v]; 
            
            // Atualize as capacidades.
            
            resAdjMatrix[u][v] -= pathflow;
            resAdjMatrix[v][u] += pathflow;
            
            // Configure para a próxima aresta no caminho.
            v = u;
            }
        
        // 6. Adicione o fluxo desse caminho ao nosso fluxo máximo total até agora.
        maxflow += pathflow;
        }
    
    return maxflow;
    }
   
int main() 
    {
    cout << "Program started.\n";
    
    // Crie nossa lista de adjacências.
    vector< vector<int> > adjMatrix = FormAdjMatrix();
    
    //FordFulkerson para obter o fluxo máximo da fonte para a pia.
    int source = 0;
    int sink = 6;
    
    for(int i = 0; i < 6; i++)
        {
        for(int j = 0; j < 6; j++)
            {
            int source = i;
            int sink = j;
            
            if(i == j) { continue; }
            
            cout << "The max flow from " << source << " to " << sink << " is: ";
            cout << FordFulkerson(adjMatrix, source, sink) << endl;
            }
        cout << endl;
        }
    
    
    cout << "Program ended.\n";
    
    return 0;
    }
