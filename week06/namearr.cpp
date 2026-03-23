#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
int t;
cout<<"enter the size of array:";
cin>>t;
string arr[t];
cin.ignore(); 
for (int i=0;i<t;i++){
cout<<"enter the names:";
getline(cin,arr[i]);
}
for (int i=0;i<t;i++){
cout<<arr[i]<<endl;
}

}