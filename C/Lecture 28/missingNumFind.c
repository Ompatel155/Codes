#include<stdio.h>
int main(){
    int arr[4]={1,2,4,5};
    int xor1=0;
    int xor2=0;
    for(int i=0;i<=5;i++){
        xor1=xor1^i;
    }
    for(int j=0;j<4;j++){
        xor2=xor2^arr[j];
    }
    printf("%d",xor1^xor2);
}