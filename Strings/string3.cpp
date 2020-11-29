#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string with some comma's :";
    cin >> s;

    // logic to remove the "," from string
    
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) == 44)
        {
            continue;
        }
        cout << s[i]<<" ";
    }

    return 0;
}