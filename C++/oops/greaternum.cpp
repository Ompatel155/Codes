//greater number
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first num :";
    cin>>a;
    cout<<"Enter the second num :";
    cin>>b;
    if(a>b){        
        cout<<"a is greater number";
    } 
else if(b>a){
    cout<<"b is greater number";
}
else{
    cout<<"number is equal";
}
return 0;
}