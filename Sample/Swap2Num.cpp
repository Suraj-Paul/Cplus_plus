#include<iostream>
#include <stdio.h> 
#include<conio.h>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter 1st number :";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << a << b << endl;

    return 0;
}