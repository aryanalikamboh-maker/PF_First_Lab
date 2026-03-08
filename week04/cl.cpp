#include<iostream>
using namespace std;
int main ()
{
float j,i,t;
cout<<"enter your bill:";
cin>>i;
if (i<5000){j=i*0.05;t=i-j;}
else {j=i*0.1;t=i-j;}
cout<<"your discounted price:"<<t;



}