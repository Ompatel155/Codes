#include<iostream>
using namespace std;
int main(){
    int n,product=1,lastDigit;
    cout<<"Enter n :";
    cin>>n;
    while(n!=0){
        lastDigit=n%10;
        n=n/10;
        product=product*lastDigit;
    }
    cout<<product;
}