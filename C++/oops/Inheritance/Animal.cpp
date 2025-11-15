#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"the animal is eating .\n";
    }
};
class Bird:virtual public Animal{
    public:
    void fly(){
        cout<<"the bird is flying .\n";
    }
    };
    class mammal:virtual public Animal{
        public:
        void Walk(){
cout<<"this animal is walking .\n";
    }
    };
    class bat :public Bird,public mammal{
        public:
        void navigate(){
            cout<<"Bat is navigate\n";
        }
    };
    int main(){
        bat B;
        B.eat();
        B.fly();
        B.Walk();
        B.navigate();
    }
    