#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main () {
	
	int N, i, j;
	vector<int> V;
	cin >> N;
	
for ( i = 0 ; i < N; i = i +2){

 for ( j = N-i ; j >=0; j ){

  if ( V [i] < V [j]){

	cout << i ;
 }
 }
}
	return 0;
};
