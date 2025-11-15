#include<iostream>
#include<climits>
using namespace std;
int main(){
    int mx=INT_MIN;
    int arr[5][5]={{0,0,0,0,0},{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{8,9,10,21,31}};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           mx=max(mx,arr[i][j]) ;
        }
        
}
cout<<mx;
    }