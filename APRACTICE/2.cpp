#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	// sub array generation
      vector<int> v1 = { 1 , 2 , 3 , 4 , 5};
	  

      for(int i = 0 ; i < v1.size() ; i++){
		for(int j = 0 ; j < v1.size() ; j++){
			// in order to print it 
			for(int k = i ; k <= j ; k++){
				cout << v1[k] ;
			}
			cout << endl;
		}
      }
	return 0;
}