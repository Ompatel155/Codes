#include<iostream>
using namespace std;
class vehicle{
    float speed;
    vehicle (float s){
        speed = s;
    }
};
class car:public vehicle{
    public:
    int seats;
    car(float s,int seatcount):
    vehicle(s){
        seats = seatcount;
    }
};
class ElectricCar:
public car{
    string bettery;
    ElectricCar(float s,int seatcount):
    vehicle(s)
    {
        seats = seatcount;
    }
};
int main(){

}