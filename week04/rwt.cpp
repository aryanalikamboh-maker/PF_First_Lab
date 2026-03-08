#include<iostream>
using namespace std;
int main ()
{
float i,j,k;
cout<<"enter red rose:";
cin>>i;
cout<<"enter white rose:";
cin>>j;
cout<<"enter tulips:";
cin>>k;
float s,l,total=i*2.0+j*4.10+k*2.50;
if (total>200){
l=total*0.2;
}
s=total-l;
cout<<"discounted price:"<<s<<endl;
cout<<"orignal price:"<<total<<endl;
}