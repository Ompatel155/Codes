#include<stdio.h>

int main(){
    int arr[5]={1,2,3,14,13,};
    int *p = arr;
    for(int i=0;i<5;i++){
printf("%d",*p);
*p++;
}
}