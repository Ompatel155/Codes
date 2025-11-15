#include<iostream>
using namespace std;
class Vehicle{
    public:
    string brand = "Ford";
    void honk(){
        cout<< " Tuut,tuut!\n";
    }
};
class car:public Vehicle{
    public:
    string model="mustang";
};
int main(){
    car mycar;
    mycar.honk();
    cout<<mycar.brand +" "+mycar.model;

}