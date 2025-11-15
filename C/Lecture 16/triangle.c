#include<stdio.h>

int main(){
    for(int i=0;i<5;i++){
        for(int l=0;l<i;l++){
        printf("  ");
    }
        for(int j=5;j>i;j--){
            printf("* ");
        }
        for(int k=4;k>i;k--){
        printf("* ");
        }
       
    printf("\n");


}
}

