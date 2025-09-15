#include<iostream>
using namespace std;
class test{
    public :
    int val;
    void show(){
        cout<<" asd "<<val <<endl;
    }
};
int main(){
    test t1,t2;
 t1.val=9;
 t2.val=10;
t2.show();
 t1.show();
}