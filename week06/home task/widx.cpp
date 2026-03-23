#include<iostream>
using namespace std;
int main ()
{
char ch[5];
for ( int i=0; i<5; i++)
{
cout<<"Enter a character: ";
cin>>ch[i];
}
for (int j=0; j<5; j++)
{cout<<ch[j]<<" founds at index "<<j<<endl;
}
}