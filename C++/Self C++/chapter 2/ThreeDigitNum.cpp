#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(num>99&&num<1000){
        cout<<"Number is three Digit";
    }
    else{
        cout<<"Number is not three Digit";
    }
}