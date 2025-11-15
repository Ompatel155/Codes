#include<iostream>
using namespace std;
class TV{
    private:
    bool isOn;
    public:
    void control(bool x){
        isOn = x;
    }
    void getSystem(){
        if(isOn) cout<<"TV is ON";
        else cout<<"TV is OFF";
        }
    };
class Remote{
    public:
    void controlTV(TV&a,bool x){
    a.control(x);
    
}
};
int main(){
    TV t1;
    Remote r1;
    r1.controlTV(t1,true);
    t1.getSystem();

}