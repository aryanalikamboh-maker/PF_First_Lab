#include<iostream>
using namespace std;
int main ()
{
int a;
cout<<"enter 4 digit numbers:";
cin>>a;
int d1,d2,d3,d4,b;
d1=a/1000;
d2=(a/100)%10;
d3=(a/10)%10;
d4=a%10;
b=d1+d2+d3+d4;
cout<<"the sum of 4 digit numbers"<<b;
}