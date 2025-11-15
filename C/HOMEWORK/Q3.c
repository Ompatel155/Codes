#include<stdio.h>
int main(){
    int arr[7]={4,5,6,7,3,1,2};
    printf("Array : ");
    for(int i=0;i<6;i++){
        printf("%d,",arr[i]);
    }
    int k=3;
 printf("\nKth element :%d",k);
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nKth Minimum element =%d",arr[k-1]);
      printf("\nKth Maximum element =%d",arr[7-k]);
}