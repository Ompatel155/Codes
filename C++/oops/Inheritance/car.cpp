#include<iostream>
using namespace std;
class car{
    public:
string fueltype;
void start(){
    cout<<"car started ";
}
void stop(){
    cout<<"car stopped";
}
};
class familycar :public car{

};
class sportcar :  virtual public car{
};
class suv:public familycar ,public sportcar{

};
int main(){
    suv s1;
    s1.fueltype ="petrol";
    s1.start();
    s1.stop();
}
