#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<5;i++){
        for(int p=0;p<i;p++){
            cout<<"* ";
        }
        for(int q=4;q>i;q--){
            cout<<"  ";
        }
        for(int j=4;j>i;j--){
            cout<<"  ";
        }
        for(int k=0;k<i;k++){
            cout<<"* ";
        
        }
        cout<<"\n";
    }
    for(int i=1;i<5;i++){
        for(int j=5;j>i;j--){
            cout<<"* ";
        }
        for(int k=1;k<i;k++){
            cout<<"  ";
        }
        for(int l=1;l<i;l++){
            cout<<"  ";
        }
         for(int t=5;t>i;t--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    
}