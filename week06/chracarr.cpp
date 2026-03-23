#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
int t,c=0;
char s;
cout<<"enter the total customer:";
cin>>t;
string arr[t];
cin.ignore();
for (int i=0;i<t;i++){
cout<<"enter the names:";
getline(cin,arr[i]);
}
cout<<"enter the 1st chracter to be count:";
cin>>s;
for (int i=0;i<t;i++){
if (arr[i][0]==s){
c++;}
cout<<arr[i]<<endl;}
cout<<"the total count of "<<s<<" is "<<c;


}
