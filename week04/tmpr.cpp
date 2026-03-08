#include<iostream>
using namespace std;
main ()
{
int i,j;
cout<<"enter the temperature 1 city:";
cin>>i;
cout<<"enter the temperature 2 city:";
cin>>j;
int t=i-j;
if (t>10){
cout<<"temperature is too big"<<endl;
}
cout<<"program ends";
}