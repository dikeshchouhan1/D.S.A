#include<iostream>
using namespace std;
int main(){
int a;
int k=1;
cout<<"enter a amount: ";
cin>>a;
int b=a/100;
int c=(a-b*100)/50;
int d=((a-b*100)-c*50)/20;
int e=(((a-b*100)-c*50)-d*20)/1;

switch (k)
{
 

case 1:

    cout<<"100 rupess :"<<b<<endl;
    cout<<"50 rupess :"<<c<<endl;
cout<<"20 rupess :"<<d<<endl;
cout<<"1 rupess :"<<e<<endl;
    break;




default: cout<<"Invided sytex"<<endl;
    break;
}

return 0;
}