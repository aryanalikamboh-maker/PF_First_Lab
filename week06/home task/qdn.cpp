#include<iostream>
using namespace std;
int main ()
{
float a,b,c,d,total,due;
cout<<"enter the quarters:";
cin>>a;
cout<<"enter the dimes:";
cin>>b;
cout<<"enter the nickels:";
cin>>c;
cout<<"enter the penies:";
cin>>d;
total=(a*0.25)+(b*0.1)+(c*0.05)+(d*0.01);
cout<<"enter the total amount due:";
cin>>due;
if (due<=total){
cout<<"yes";}
else
cout<<"no";






}