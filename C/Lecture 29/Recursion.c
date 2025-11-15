#include<stdio.h>
    void sum(int a){
        if(a==0){
            return;
        }
        sum(a-1);
        printf("%d ",a);
    }
    int main(){
        sum(5);
    }

    // _____________Reverse karna hain_______________________________
    
    
    // void sum(int a){
    //     if(a==0){
    //         return;
    //     }
    //     sum(a-1);
    //     printf("%d ",a);
    // }
    // int main(){
    //     sum(5);
    // }

