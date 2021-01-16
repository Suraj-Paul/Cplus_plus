// sum of the sqaure of the sequence starting from 0 to n.

#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int sum = 0,n;
    int total = 0;
    cin >> n;
    while(i<n){
        sum =i * i;
        total = total + sum;
        i = i + 1;
    }
    cout << total;
}