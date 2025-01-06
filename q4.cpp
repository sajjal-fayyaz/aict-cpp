#include <iostream>
using namespace std;
int main () {
    int a,b,c;
    cout<<"enter number1=";
    cin>>a;
    cout<<"enter number2=";
    cin>>b;
    cout<<"enter number3=";
    cin>>c;
    b=b+c;
    b=a*b;
    a=a+c;
    a=c*a;
    c=b+a;
    cout<<"answer is="<<c;
}