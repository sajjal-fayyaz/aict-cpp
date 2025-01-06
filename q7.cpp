#include <iostream>
using namespace std;
int main () {
int subject1,subject2,subject3,subject4,subject5,percentage,sum;
string studentName;
cout<<"student name"<<endl;
cin>>studentName;
cout<<"subject1 marks"<<endl;
cin>>subject1;
cout<<"subject2 marks"<<endl;
cin>>subject2;
cout<<"subject3 marks"<<endl;
cin>>subject3;
cout<<"subject4 marks"<<endl;
cin>>subject4;
cout<<"subject5 marks"<<endl;
cin>>subject5;
sum=subject1+subject2+subject3+subject4+subject5;
percentage+ sum/500*100;
cout<<"student name and percentage"<<endl;
return 0;
}