#include<stdio.h>
int main(){
    int arr[]={-3,2,4,-7,-1,1,5};
    int negat[3];
    int posi[4];
    int ans[7];
    for(int i=0;i<7;i++){
        if(arr[i]<0){
            int j =0;
            negat[j]=arr[i];
            j++;
        }
        else{
            int k=0;
            posi[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<7;i++){}
}