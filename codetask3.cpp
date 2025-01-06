#include <iostream>
using namespace std;
int main () {
    string word1, word2;
    cout<<"enter the first word"<<endl;
    cin>>word1;
    cout<<"enter the second word"<<endl;
    cin>>word2;
    if(word1== word2) {
        cout<<"yes, the words are the same"<<endl;
    } else {
        cout<<"no, the words are diffeerent"<<endl;
    }
    return 0;
}