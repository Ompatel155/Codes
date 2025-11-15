#include<stdio.h>

int main(){
    int arr[5]={1,3,4,5,65};
    int n=sizeof(arr);
    for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1]){
        int temp=arr[i];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
      
  print("%d",arr[j+1]);
}
}
} 

    

