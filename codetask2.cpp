#include <iostream>
using namespace std;
int main () {
    int number1, number2;
    cout<<"enter your first number"<<endl;
    cin>>number1;
    cout<<"enter your second number"<<endl;
    cin>>number2;
    if(number1>number2) {
        cout<<"the larger number is"<< number1 <<endl;
    } else if (number2 > number1){
        cout<<"the larger number is " << number2 <<endl;
    } else {
        cout<< "both numbers are equal" << endl;
    }
    return 0;
}