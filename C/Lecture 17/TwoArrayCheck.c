#include<stdio.h>

int main(){
    int a[3]={1,2,3};
    int b[3]={1,2,3};
    int *p1=&a;
    int *p2=&b;
    int flag = 1;
    for(int i=0;i<5;i++){
        if (*(p1+i)!=*(p2+i)){
            flag=0;
            break;
        }
        if()
    }

}
