#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int a;
    cin>>a;
    
    int digt=0;
    int decimal=0;
    int i=0;
    while (a!=0){

        /* code */
        digt=a%10;
        decimal+=digt*pow(2,i);


    
        a=a/10;
    i++;
    
    }
    cout<<decimal<<endl;
}
