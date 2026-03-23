#include<iostream>
using namespace std;
int main ()
{
int t=4,sum=0;
int arr[t];
for (int i=0;i<t;i++){
cout<<"enter the number";
cin>>arr[i];
}
for (int i=0;i<4;i++){
cout<<arr[i]<<endl;
sum+=arr[i];

}
cout<<"the sum is "<<sum;



}