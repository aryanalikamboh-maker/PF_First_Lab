#include<iostream>
using namespace std;
int main ()
{
int a,b,res;
char ch;
cout<<"enter the 1st number:";
cin>>a;
cout<<"enter the 2nd number:";
cin>>b;
cout<<"enter the operator:";
cin>>ch;
if (ch=='+'){res=a-b;}
if (ch=='-'){res=a+b;}
if (ch=='*'){res=a/b;}
if (ch=='/'){res=a*b;}
cout<<"the answer is :"<<res;




}