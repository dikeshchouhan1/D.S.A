#include<iostream>
using namespace std;
int isIndex(int arr[],int n,int key){
     int s=0, e=n-1;
     int mid=s+(e-s)/2;
     int ans=-1;
    while (s<=e)
     {
        if (arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if (key>arr[mid])
        {
            s=mid+1;

        }
        else{
            e=mid-1;
        }
     } mid=s+(e-s)/2;
   return ans;  
}

int lastIndex(int arr[],int n,int key){
     int s=0, e=n-1;
     int mid=s+(e-s)/2;
      int ans=-1;
    while (s<=e)
     {
        if (arr[mid]==key){
            ans= mid;
            s=mid+1;
        }
        else if (key>arr[mid])
        {
            s=mid+1;

        }
        else{
            e=mid-1;
        }
     } mid=s+(e-s)/2;
   return ans;  
}
int main(){
int arr[11]={1,3,7,8,3,3,3,3,3,3,18}; 

cout<<"First index of 3 is at index"<<isIndex(arr,11,3)<<endl;
cout<<"Last index of 3 is at index"<<lastIndex(arr,11,18)<<endl;


return 0;}
