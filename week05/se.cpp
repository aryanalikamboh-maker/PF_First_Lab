#include<iostream>
using namespace std;
int main ()
{
int a,b,sum=0;
cout<<"enter start digit:";
cin>>a;
cout<<"enter the ending digit from you want to sum:";
cin>>b;
for (int i=a;i<=b;i++)
{sum=sum+i;}
cout<<"the sum of the digits from "<<a<<" to "<<b<<" is "<<sum;



}