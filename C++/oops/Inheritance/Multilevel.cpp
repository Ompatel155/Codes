#include<iostream>
using namespace std;
class animal{
    public:
    void Eat(){
        cout<<"this animal eats food .";

    }
};
class Mammal: public animal{
    public:
    void Walk(){
cout<<"this animal is walking .";
    }
};
class Dog : public Mammal{
    public:
    void Bark(){
        cout<<"this animal is barking";
    }

};
int main(){
Dog d;
d.Eat();
d.Walk();
d.Bark();
}