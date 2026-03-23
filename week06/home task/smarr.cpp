#include<iostream>
using namespace std;
int main ()
{
int t,c=1;
float avg;
cout<<"enter the size of array:";
cin>>t;
int arr[t],sm=0;
for (int i=0;i<t;i++){
cout<<"enter the "<<i+1<<" element:"<<endl;
cin>>arr[i];
c++;
sm+=arr[i];
}
for(int i=0;i<t;i++){
cout<<"the "<<i+1<<" element:"<<arr[i]<<endl;}
avg=sm/t;
cout<<"the sum is:"<<sm<<endl;
cout<<"the average is:"<<avg<<endl;

}