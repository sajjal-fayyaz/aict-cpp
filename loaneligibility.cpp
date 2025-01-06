#include <iostream>
using namespace std;
int main () {
int age;
cout<<"enter your age"<<endl;
cin>>age;
int montlyIncome;
cout<<"enter your montly income"<<endl;
cin>>montlyIncome;
int loanAmount;
cout<<"enter your loan amount"<<endl;
cin>>loanAmount;
if(age<=21 && age>=60){
 if( montlyIncome >40000)
 cout<<"get loan"<<endl;
} else { 
    cout<<"get no loan"<<endl;
    if(montlyIncome >35000) {
    cout<<"get loan below 500000";
  } else {
        cout<<"loan is rejected"<<endl;
    }
}
return 0;
}