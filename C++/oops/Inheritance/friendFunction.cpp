#include<iostream>
using namespace std;
class two;
class one {
    friend class two;
    int a = 24;
public:
void show(){
    cout<<"This is class one"<<"\n";
}
};
class one;
class two{
    friend class one;
    int a = 10;
    public:
    void show(){
        cout<<"This is class two"<<"\n";
    }
};
int main(){

}