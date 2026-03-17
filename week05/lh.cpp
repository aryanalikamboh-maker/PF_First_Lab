#include<iostream>
using namespace std;
int main ()
{
int num1,num2,lcm,hcf;
cout<<"enter 1st number:";
cin>>num1;
cout<<"enter 2nd number:";
cin>>num2;
for (int i=1;i<=num1&&i<=num2;i++){
if (num1%i==0&&num2%i==0){hcf=i;}}
lcm=(num1*num2)/hcf;
cout<<"lcm="<<lcm<<endl;
cout<<"hcf="<<hcf<<endl;    


}