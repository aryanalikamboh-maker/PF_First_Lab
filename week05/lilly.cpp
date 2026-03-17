#include <iostream>
using namespace std;
int main ()
{
int age,price,toy,total=0,c=0,s;
cout<<"enter the age:";
cin>>age;
cout<<"enter the price of washing machine:";
cin>>price;
cout<<"enter the each toy price:";
cin>>toy;
for (int i=1;i<=age;i++){
if (i%2==0){
total=total+9;
}
else
{
c++;
}
}
s=c*toy+total;
if (s>=price)
cout<<"yes:";
else
cout<<"no";



}