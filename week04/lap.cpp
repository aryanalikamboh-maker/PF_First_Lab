#include<iostream>
using namespace std;
int main ()
{
float sal,pr,adv,t,req;
int mont;
cout<<"enter the monthly salary:";
cin>>sal;
cout<<"enter the price of laptop:";
cin>>pr;
cout<<"enter advanced salary percentage asked to manager :";
cin>>adv;
cout<<"enter the months for advance salary:";
cin>>mont;
t=(adv/100*sal)*mont;
req=pr-t;
if (t==pr){cout<<"you can buy a laptop";}
else {cout<<"you can not buy a laptop and if you want to buy laptop you required "<<req;}

}