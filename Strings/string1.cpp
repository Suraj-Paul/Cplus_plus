#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int N, i;
	cin>>N;
	char *arr[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	if(N<=25){
		for (i = 0; i <= N; i++)
		{
			cout << arr[i] << " ";
		}
	}else{
		for (int j = 0; j <= N - 25; j++){
			cout << arr[i] << " " << arr[j]<<" ";
			
		}
	}
	

	
	// }else{
	// 	for (int j = 0; j <= N + 1;j++){
	// 		cout << arr[j]<<" ";

	// 	}
		
			
	// }
	

	return 0;
}