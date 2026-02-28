#include<iostream>
using namespace std;
int main ()
{
int a,vf,vi,t;
cout<<"enter accleration (m/s^2) ";
cin>>a;
cout<<"enter initial velocity(m/s)";
cin>>vi;
cout<<"enter time (s) ";
cin>>t;
vf=vi+a*t;
cout<<"so final velocity is (m/s) "<<vf;
}