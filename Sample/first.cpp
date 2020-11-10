#include<iostream>
#include <stdio.h> 
#include<conio.h>
using namespace std;

// int swap( int a, int b){
//     int c ,d;
//     c = a;
//     a = b;
//     b = c;
//     return cout>>;
// }

int main() 
{

    int num1, num2, num3;

    cout << "Enter Two numbers : ";
    cin >> num1 >> num2;
    num3 = num1;
    num1 = num2;
    num2 = num3;
    cout << num1<<num2;


    return 0;
} 
