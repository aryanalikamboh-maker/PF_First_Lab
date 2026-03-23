#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
int t;
cout<<"enter the size of array:";
cin>>t;
string arr [t];
int brr [t],crr [t],drr[t],sum=0;
for (int i=0;i<t;i++){
cout<<"enter the name of product:";
cin>>arr[i];
cout<<endl;
cout<<"enter the price per kg :";
cin>>brr [i];
cout<<endl;
cout<<"enter the quantity of kg:";
cin>>crr[i];
}
for (int i=0;i<t;i++){
drr[i]=brr[i]*crr[i];
}
for (int i=0;i<t;i++){
cout<<"your the price of "<<arr[i]<< " is "<<drr[i]<<endl;
sum=sum+drr[i];
}
cout<<"the total price is "<<sum<<endl;

}