#include<iostream>
using namespace std;
int main ()
{
string pin;
for (int i=1;i<=3;i++)
{
cout<<"enter the pin please:";
cin>>pin;
if (pin=="4169")
{
cout<<"login successfull"<<endl<<"this is the menu::\n";
cout<<"1-check balance\n";
cout<<"2-deposit money\n";
cout<<"3-withdraw money\n";
cout<<"4-exit\n";
break;
}
else
{cout<<"wrong pin try again\n";

}
}
int choice,balance=0,depositmoney=0;
for (int i=1;i<=4;i++)
{
cout<<"enter your choice please:";
cin>>choice;
if (choice==1)
{cout<<"your balance is"<<depositmoney<<endl;
}
else if (choice==2)
{
cout<<"enter the amount you want to deposit:";
cin>>depositmoney;
}
else if (choice==3)
{
int withdrawmoney;
cout<<"enter the amount you want to withdraw:";
cin>>withdrawmoney;
if (withdrawmoney>depositmoney)
{cout<<"you dont have enough balance\n";
}
else
{depositmoney=depositmoney-withdrawmoney;
cout<<"your new balance is:"<<depositmoney<<endl;
}
}
else if (choice==4)
{cout<<"thank you for using our services\n";
}
}
}
