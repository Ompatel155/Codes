//swap the number
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter the first num :";
    cin>>a;
    cout<<"Enter the second num :";
    cin>>b;
    cout<<"Before swapping the are : a="<<a<<endl<<"b="<<b;
    temp = a;
    a = b;
    b =temp;

    cout<<"/n After swapping the are : a= "<<a<<endl<<"b="<<b;

}