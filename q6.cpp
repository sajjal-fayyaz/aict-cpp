#include <iostream>
using namespace std;
int main () {
float acceleration,time,vi,vf;
cout<<"vi of car"<<endl;
cin>>vi;
cout<<"acceleration of car"<<endl;
cin>>acceleration;
cout<<"time taken by car"<<endl;
cin>>time;
vf=vi+acceleration*time;
cout<<"vf of car"<<endl;
return 0;
}