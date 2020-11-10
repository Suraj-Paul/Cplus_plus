#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Please enter a number to find its factorial : ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;
    return 0;
}