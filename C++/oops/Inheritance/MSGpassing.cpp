#include<iostream>
using namespace std;
class Cars{
    public:
    void startEngine(){
cout<<"Engine started"<<endl;
    }
    
};
class Drive{
    public:
    void drive(Cars &car){
        car.startEngine();
        cout<<"Car is being drive "<<"\n";
    }
};
int main(){
Cars mycar;
Drive drive;
drive.drive(mycar);
}