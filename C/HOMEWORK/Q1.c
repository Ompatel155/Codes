// #include<stdio.h>
// int main(){
//     int max,min;
//     int arr[8]={0,1,2,3,4,5,6,7};
//     max=arr[0];
//     min=arr[0];
    
//     for(int i=0;i<8;i++){
//         if(arr[i]>max)  max = arr[i];
//         if(arr[i]<min)  min = arr[i];
        
//     }
//     printf("Maximum element =%d\n",max);
//     printf ("minimum element =%d\n",min);
// }

#include<stdio.h>
int main(){
    int max,min;
    int arr[5]={1,2,3,4,5};
    

    for(int i=0;i<5;i++){
        max=arr[0];
        min=arr[0];
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    printf("max element :%d\n",max);
    printf("min element :%d\n",min);

}