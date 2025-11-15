#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<6;i++){
        for(int j=6;j>i;j--){
            cout<<" ";
        }
        for(int l=0;l<i;l++){
            cout<<"* ";
        }
        cout<<"\n";
    }
        for(int t=0;t<4;t++){
            for(int j=0;j<3;j++){
                cout<<" ";
            }
            for(int y=0;y<3;y++){
                cout<<"* ";
            }
            cout<<"\n";
        }
        
}
