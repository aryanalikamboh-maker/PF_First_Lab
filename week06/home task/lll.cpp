#include<iostream>
using namespace std;
int main ()
{
int t, arr1[2];
for (int i=0;i<2;i++){
cout<<"enter the 2 element for 1st array :";
cin>>arr1[i];
}
cout<<"enter the number for the elements of 2nd array:";
cin>>t;
int arr[t];
for (int j=0;j<t;j++){
cout<<"enter the element:";
cin>>arr[j];
}
cout<<arr1[0]<<",";
for (int k=0;k<t;k++){
cout<<arr[k]<<",";

}
cout<<arr1[1];
}