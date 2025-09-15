#include<iostream>
using namespace std;
int main(){
    int n,sum=0,lastDigit;
    cout<<"Enter n :";
    cin>>n;
    while(n!=0){
        lastDigit=n%10;
        n=n/10;
        sum=sum+lastDigit;
    }
    cout<<sum;
}