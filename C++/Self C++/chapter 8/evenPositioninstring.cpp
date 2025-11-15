#include<iostream>
using namespace std;
int main(){
    string s="Raghav Garg";
    for (int i=0;i<s.length();i++){
        if(s[i]%2==0){
           s[i]='A';
           cout<<s[i];
        }
        else{
            cout<<s[i];
        }
    }
}