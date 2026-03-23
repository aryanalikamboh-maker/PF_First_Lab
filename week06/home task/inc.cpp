#include<iostream>
using namespace std;
int main ()
{
int t;
cout<<"enter the size of array:";
cin>>t;
char ch[t];
for (int i=0;i<t;i++){
cout<<"enter the "<<i+1<<" chracter :";
cin>>ch[i];
}
for (int i=0;i<t;i++){
ch[i]++;
}
cout<<"the incremenal chracter is::";
for (int i=0;i<t;i++){
cout<<ch [i];



}





}