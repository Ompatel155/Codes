#include<iostream>
using namespace std;
int Greet(){
    cout<<"Heyyy !";
    Greet();
}
int main(){
    Greet();
}