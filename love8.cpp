#include<iostream>
using namespace std;
int ap(int n){
    int a=0;
    int b=1;
    int c=a+b;
    for (int i = 0; i <n; i++)
    {
        cout<<c<<" ";
    }
    a=b;
    b=c;
    cout<<endl;
    return c;
    

}
int main(){
int n;
cin>>n;

cout<<ap(n)<<endl;




return 0;
}