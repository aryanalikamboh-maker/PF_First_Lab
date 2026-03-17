#include<iostream>
using namespace std;
int main ()
{
string username,password,studentname,coursename;
int age,choice;
for (int i=1;i<=3;i++){
cout<<"enter the user name\n";
cin>>username;
cout<<"enter the password:\n";
cin>>password;
if (username=="admin"&&password=="1234"){
cout<<"login succesfull";
break;
}
else {
cout<<"wrong password\n";
}
if (i==3)
{
    cout<<"two many atenpts";
    break;
    }
 }   for (int j=1;j<=5;j++){
cout<<"\n----university managment system----\n";
cout<<"1-add student\n";
    cout<<"2-view student\n";
    cout<<"3-add course\n";
    cout<<"4 exit\n";
cout<<"enter your choice\n";
cin>>choice;
if (choice==1){
    cout<<"enter student name\n";
    cin>>studentname;
    cout<<"enter student age\n";
    cin>>age;
    cout<<"student added succesfully\n";
 }
else if (choice==2){
    cout<<"student name:"<<studentname<<"\n";
    cout<<"student age:"<<age<<"\n";


}

else if (choice==3){
    cout<<"enter course name\n";
    cin>>coursename;
    cout<<"course added succesfully\n";
    cout<<"course name:"<<coursename<<"\n";
}
else if (choice==4){
    cout<<"exiting the system\n";
    break;
}
else {
    cout<<"invalid choice\n";
}
 }
}


