#include<iostream>
using namespace std;

int main(){
    string longest, shortest, word;
    cout << "Enter a word" << endl;
    cin >> word;
    getline(cin, word);
    while(cin>>word){
        cout << "*****";
        if(word.size()>longest.size()){
            longest = word;
        }else if(word.size()<shortest.size()){
            shortest = word;
        }
    }
    cout << "the longest word enterd was: " << longest<<endl;
    cout << "the shortest word enterd was: " << shortest<<endl;
    return 0;
}