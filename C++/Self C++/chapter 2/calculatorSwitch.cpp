#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value a : ";
    cin>>a;
    cout<<"Enter value b : ";
    cin>>b;
    char op;
    cout<<"Enter operator : ";
    cin>>op;
    switch(op){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default :
        cout<<"Invalid Operator";
    }
}