#include<iostream>
using namespace std;
void printA(int arr[],int size){
    for (int  i = 0; i < size; i++)

    {cout<<arr[i]<<" ";
        /* code */
    }cout<<endl;
    
}
void swife(int arr[],int size){
    for (int  i = 0; i < size; i+=2)
    {
        if (i+1< size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
}
int main(){
int arr[10]={1,0,8,6,3,4,8,6,2,5};

swife(arr,10);
printA(arr,10);
return 0;
}