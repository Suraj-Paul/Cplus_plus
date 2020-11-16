#include <iostream>
#include <string>
#include<sstream>
using namespace std;

int main() {
	// Complete the program
    string a;
    getline(cin, a);
    string b;
    getline(cin, b);
    int len1 = a.size();
    int len2 = b.size();
    cout << abs(len1) << " " << abs(len2) << endl;
    cout << a + b << endl;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b;
  
    return 0;
}