// C++ program to convert a decimal 
// number to hexadecimal number 
  
#include<iostream> 
using namespace std; 
  
// fun��o para converter decimal em hexadecimal
void decToHexa(int n) 
{    
    // matriz de caracteres para armazenar o n�mero hexadecimal
    char hexaDeciNum[100]; 
      
    �// contador para matriz num�rica hexadecimal
    int i = 0; 
    while(n!=0) 
    {    
        // vari�vel tempor�ria para armazenar o restante 
        int temp  = 0; 
          
        // armazenando o restante na vari�vel temp.
        temp = n % 16; 
          
        // verifique se temp <10
        if(temp < 10) 
        { 
            hexaDeciNum[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNum[i] = temp + 55; 
            i++; 
        } 
          
        n = n/16; 
    } 
      
    // printing hexadecimal number array in reverse order 
    for(int j=i-1; j>=0; j--) 
        cout << hexaDeciNum[j]; 
} 
  
// Driver program to test above function 
int main() 
{ 
    int n = 2545; 
      
    decToHexa(n); 
      
    return 0; 
} 
