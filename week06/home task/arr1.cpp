#include<iostream>
using namespace std;
int main ()
{
int t;
cout<<"enter the size of array:";
cin>>t;
int arr[t];
for (int i=0;i<t;i++){
cout<<"enter the element:";
cin>>arr[i];
}
cout<<"the 1st element is :"<<arr[0]<<endl;
cout<<"the last element is:"<<arr[t-1];

}