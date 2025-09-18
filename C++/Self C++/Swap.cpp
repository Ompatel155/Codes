#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter y :";
    cin>>y;
    cout<<"Without swapping number x & y :"<<x<<","<<y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<"\n swapping number x & y :"<<x<<","<<y;
}