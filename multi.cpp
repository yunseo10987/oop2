#include<iostream> 
using namespace std;

int main(){
	int first, second =0;
	cout << "몇 단까지 곱하실 건가요?";
	cin >> first;
	cout << "몇까지 곱하실 건가요?";
	cin >> second;

	int** result = new int* [first+1];
	for(int i=1; i<= first; i++){
	result[i] = new int[second+1];
	}
        for(int i=1; i<= first; i++){
         for(int j=1; j<=second; j++){
	  result[i][j] = i * j;
         }
        }
	for(int i=1; i<= first; i++){
           for(int j=1; j<=second; j++){
		   cout << result[i][j];
           }
			 cout <<"\n";
         }
	
	return 0;
}
