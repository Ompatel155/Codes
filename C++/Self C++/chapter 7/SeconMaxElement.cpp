#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={-10,-2,-3,-4,-5};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0;i<6;i++){
        mx = max(mx,arr[i]);

    }
    int smx =INT_MIN;
    for(int j=0;j<6;j++){
      if(arr[j]!=mx)  smx = max(smx,arr[j]);
    }
    cout<<smx;
}