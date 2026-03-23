#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
string name[3];
for (int i=0;i<3;i++)
{
    
cout<<"enter the name :";
getline(cin,name[i]);
}
for (int i=2;i>=0;i--)
{
cout<<name[i]<<endl;
}


}