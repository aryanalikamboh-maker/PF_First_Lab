#include<iostream>
#include<string>
using namespace std;
void c(int a)
{
    string ones[]={" ","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[]={" ","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if (a<20)
    {
        cout<<ones[a];
    }
    else
    {
        cout<<tens[a/10]<<" "<<ones[a%10];
    }
}

int main ()
{
int a;
cout<<"enter the number 1..99:";
cin>>a;
if (a>=1 && a<=99)
{
c(a);

}
}