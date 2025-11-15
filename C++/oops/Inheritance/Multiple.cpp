#include<iostream>
using namespace std;
class father{
    public:
    void eye(){
        cout<<"the eye is blue .\n";
    }
};
class Mother{
    public:
    void screen(){
        cout<<"the screen coloutr is brown .\n";
    }
};
class child:public father,public Mother{
    public:
    void boy(){
        cout<<"GOOD BOY !";
    }
};
int main(){
child c;
c.eye();
c.screen();
c.boy();
}
