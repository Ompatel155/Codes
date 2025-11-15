#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
 for(int i=0;i<6;i++){
    if(arr[i]%2==0){
   int j= arr[i]+arr[i];
   cout<<j<<" ";

    }
    else{
       int t= arr[i]+10;
        cout<<t<<" ";
    }
 }
 }
