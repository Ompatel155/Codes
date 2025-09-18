#include<iostream>11
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
  cout<<"composite";
break;
      }
    }  
}
