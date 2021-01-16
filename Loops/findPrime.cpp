#include<iostream>
#include<cmath>
using namespace std;
 int main(){
     int s, e;
     cout << "Enter two numbers to find prime number between them : ";
     cin >> s >> e;
     for (int num = s; num <= e; num++){
         int i;
         for (i = 2; i <= num; i++){
             if(num%i==0){
                 break;
             }  
         }
         if(num==i){
             cout << i << endl;
         }
     }
         return 0;
 }