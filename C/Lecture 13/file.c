#include<stdio.h>

int main(){
    int arr[5]={10,20,30,40,50};
    for(int i=4;i>=0;i--){
        int reverse;
        reverse=arr[i];
        printf("%d",reverse);
    }
}