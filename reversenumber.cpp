#include <iostream>
using namespace std;
int main () {
    int yearExperience;
    cout<<"enter your experience"<<endl;
    cin>>yearExperience;
    int age;
    cout<<"enetr your age"<<endl;
    cin>>age;
    bool status;
    cout<<"degree status"<<endl;
    cin>> status;
    bool convictionStatus;
    cout<<"conviction status"<<endl;
    cin>>convictionStatus;
    if (yearExperience >= 2) {
     if(yearExperience <=5) {
        cout<<"applicant require degree"<<endl;
       }else if (yearExperience >=5){
            cout<<"applicant dont require degree"<<endl;
        }
     }
      else {
        cout<<"cannot eligible for job"<<endl;
      }
      return 0;
     }
