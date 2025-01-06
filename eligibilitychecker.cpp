#include <iostream>
using namespace std;
int main () {
 float percentageMarks;
 cout<<"enter percentage of mark"<<endl;
 cin>>percentageMarks;
 float familyIncome;
 cout<<"enter family income"<<endl;
 cin>>familyIncome;
 if( percentageMarks >=80){
    cout<<"eligible";
 } else{
    cout<<"not eligible";
 }
 if (percentageMarks>90){
    if(familyIncome>50000)
    cout<<"get scholarship"<<endl;
 } else{
    cout<<"no scholarship"<<endl;
 } 
 if( 100000>=50000){
    cout<<"get half scholarship"<<endl;
 } else{
    cout<<"not get half scholarship"<<endl;
 }
 return 0;
 }