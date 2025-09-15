#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(num%5==0 or num%3==0){
        cout<<"Number is Divisible by 5 or 3";
    }
    else{
        cout<<"Number is not Divisible by 5 or 3";
    }
}