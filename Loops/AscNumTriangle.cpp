#include<iostream>
using namespace std;

int main(){
    int x, y, n;
    cout << "Enter a number";
    cin >> n;
    for (x = 1; x <= n;x++){
        for (y = x; y >= 1;y--){
            cout << x<<" ";
        }
        cout << endl;
    }
}