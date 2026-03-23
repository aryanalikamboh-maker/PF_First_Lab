#include<iostream>
using namespace std;
int main ()
{
int t,c=0;
cout<<"enter the size of array:";
cin>>t;
int arr[t];
for (int i=0;i<t;i++){
cout<<"enter the "<<i+1<<" element";
cin>>arr[i];
if (arr[i]%2==0){
    c++;
}
}
cout<<"the number of even elements in the array is:"<<c;
return 0;
}
