#include<iostream>
using namespace std;
int main ()
{
int t,max=-1,min;
cout<<"enter the size of array:";
cin>>t;
int arr[t];
for (int i=0;i<t;i++){
cout<<"enter the "<<i+1<<" element:";
cin>>arr[i];
}
min=arr[0];
for (int i=0;i<t;i++){
if (arr[i]>max){
max=arr[i];
}
}
for (int i=0;i<t;i++){
if (arr[i]<min){
min=arr[i];
}
}
cout<<"the minimum value is:"<<min;
cout<<endl;

cout<<"the maximum value is:"<<max;

}