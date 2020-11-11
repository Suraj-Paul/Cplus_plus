#include<iostream>
using namespace std;
void reverseArray(int arr[],int start,int end){
    while(start<end)
    {
     int temp = arr[start];
     arr[start] = arr[end];
     arr[end] = temp;
     start++;
     end--;
     }
}

void printArray(int arr[], int length){
    for (int i = 0; i < length; i++){
        cout << arr[i]<<" ";
        
    }
    cout << endl;
}
 int main(){
    //  int N;
    //  cin >> N;
    //  int arr[N];
    //  for (int x = 0;x<N;x++){
    //      cin >> arr[N];
    //  }
    int arr[] = {2, 4, 3, 6, 8, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
     // Original Array
     cout << "Original array" << endl;
     printArray(arr, n);
     // reverse the array
     reverseArray(arr, 0, n - 1);
     cout << "Reversed array" << endl;
     // printing reverse array
     printArray(arr, n);

     return 0;
 }