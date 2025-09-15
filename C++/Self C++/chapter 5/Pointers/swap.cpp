#include<iostream>
using namespace std;
void swap(int*a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 20;
    int b= 30;
    cout<<a<<" "<<b;
    swap(&a,&b);
    cout<<"\n"<<a<<" "<<b;

}