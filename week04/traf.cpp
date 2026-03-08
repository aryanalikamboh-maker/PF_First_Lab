#include<iostream>
using namespace std;
int main ()
{
int i;
cout<<"enter the speed:";
cin>>i;
if (i<10)
{
cout<<"slow";
}
if (i>10){
if (i<50)
cout<<"average";
}
if (i>50){
if (i<150){
cout<<"fast";
}
}
if (i>150){
if (i<100)
cout<<"ultra fast";}
if (i>1000){
cout<<"extremely fast";
}
}