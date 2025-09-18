#include<iostream>
using namespace std;
int main(){
    float sp,cp;
    cout<<"Enter the cost price :";
    cin>>cp;
    cout<<"Enter the selling price :";
    cin>>sp;
if(sp>cp){
    cout<<"Profit";
}
else if(sp<cp){
    cout<<"Loss";
}
else{
    cout<<"No Profit,No Loss";
}
cout<<": "<<sp-cp;
    }