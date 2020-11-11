#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int N;
    cin >> N;
    int arr[N];
    for (int j = 0; j < N; j++){
        cin >> arr[j];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

        return 0;
}