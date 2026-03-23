#include<iostream>
using namespace std;
int main ()
{
int t ;
cout<<"enter the size of array:";
cin>>t;
int arr[t];
for (int i=0;i<t;i++){
cout<<"enter the "<<i+1<<" element :";
cin>>arr [i];
}
cout<<"the reverse word is:";
for (int i=t-1;i>=0;i--){
cout<<arr[i]<<" ";
}


}