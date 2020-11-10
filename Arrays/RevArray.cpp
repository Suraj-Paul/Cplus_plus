#include<iostream>
using namespace std;
 int main(){
     int N,i;
     cin >> N;
     int arr[N];
     for ( i = 1; i <= N;i++){
         cin >> arr[i];
     }
     

       for ( i = 1; i <= N;i++){
           cout << arr[i] << " ";
       }

    

     return 0;
 }