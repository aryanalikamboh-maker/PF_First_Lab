#include<iostream>
using namespace std;
int main ()
{
int t,sum=0;
cout<<"enter the number of resistance in circut:";
cin>>t;
float arr[t];
for (int i=0;i<t;i++){
cout<<"enter the resitance values in ohms of the "<<t<<" resistors one per line :";
cin>>arr [t];
sum+=arr[t];
}
cout<<"the total resistance of series circut:"<<sum;
}