#include<iostream>
using namespace std;
int main ()
{
int t,temp;
cout<<"enter the size of array:";
cin>>t;
int arr [t];
for (int i=0;i<t;i++){
cout<<"enter the "<<i+1<<" element:";
cin>>arr [i];
}
for (int i=0;i<t;i++){
for (int j=i+1;j<t;j++){
if (arr [i]>arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for (int i=0;i<t;i++){
cout<<arr[i]<<",";

}
}