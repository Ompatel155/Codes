#include<iostream>
using namespace std;
class Outer{
    public :
    class Inner{
        public:
       void display(){
        std::cout<< "Inner class"<<endl;
       }
    };
};
int main(){
Outer o1;
o1;
}