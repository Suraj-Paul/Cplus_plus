#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    int arr[N];
    // Taking input and storing into an array
    for (int j = 0; j < N; j++){
        cin >> arr[j];
    }

    // Printing all the elements of the array
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " "; 
    }

    return 0;
}