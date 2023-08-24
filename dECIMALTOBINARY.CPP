#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ans=0;
    int power=1;
    while (a!=0)
    {
        int digit=a%2;
        ans+=digit*power;
        power*=10;
        a=a/2;

    }
    cout<<ans<<endl;
    
}