#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

// class Letters{
// 	public:
// 	int N, i;
// 	string arr[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
// 	printChar(){
// 		if(N<=25){
// 		for (i = 0; i <= N; i++)
// 		{
// 			cout << arr[i] << " ";
// 		}
// 	}

// 	}
	

// }

int main() {
	int N, i;
	cin>>N;
	string arr[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	if(N<=25){
		for (i = 0; i <= N; i++)
		{
			cout << arr[i] << " ";
		}
	// }else if (N>25){
	// 	int n1;
	// 	n1 = N - 25;
	// 	for (i = 0; i <= N; i++)
	// 	{
	// 		cout << arr[i] << " ";
	// 	}
	// 	for ( int j = 0; j <= n1; j++)
	// 	{
	// 		cout << arr[j] << " ";
	// 	}
	// }
	
	return 0;
}