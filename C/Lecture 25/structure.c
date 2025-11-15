#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
 char name[20] ;
   int age;
   float cgpa;

};
int main(){
    struct student s1;
    strcpy(s1.name,"om patel");
    printf("%s\n",s1.name);
    s1.age = 19;
    printf("%d\n",s1.age);
    s1.cgpa =7.5;
    printf("%f\n",s1.cgpa);
    
    
}
