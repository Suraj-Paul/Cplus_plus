#include<iostream>
using namespace std;

int main(){
    int x, y, n;
    cout << "Enter a number";
    cin >> n;
    for (x = n; x >= 1;x--){
        for (y = 1; y <= x;y++){
            cout << x<<" ";
        }
        cout << endl;
    }
}
