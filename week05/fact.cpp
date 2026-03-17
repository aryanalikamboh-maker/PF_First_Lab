#include<iostream>
using namespace std;
int main ()
{
int f=1,a;
cout<<"enter the number:";
cin>>a;
for (int i =a;i>=1;i--){
f=f*i;
}
cout<<"the factorial of "<<a<<" is:"<<f;
}