#include<iostream>
#include <stdio.h> 
#include<conio.h>
using namespace std;

int main() 
{
    int num1, num2;
    cout << "Enter Two numbers : ";
    cin >> num1 >> num2;

    num1 = num2 + num1;
    num1 = num1 - num2;
    num2 = num2 - num1;

    cout << num1<<num2;

    return 0;
} 
