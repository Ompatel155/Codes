#include<stdio.h>
int sum(int*x,int*y){
*x=50;
*y=50;
int c=(*x)+(*y);
return c;
}
int main(){
    int x=20;
    int y=10;
    int data =sum(&x,&y);
    printf("%d",data);
    printf("%d",x+y);
}