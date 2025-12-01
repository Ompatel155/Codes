#include<iostream>
using namespace std;
class BasicCalculator{
    public:
    virtual double add(double a,double b){
        return a+b;
    }
virtual double sub(double a,double b){
    return a-b;
}
virtual double multiply(double a,double b)=0;
virtual double multiply(double a,double b)=0;

};
class Calculator:public BasicCalculator{
    public:
    virtual double multiply(double a,double b){
        return a*b;
    }
    virtual double divide(double a,double b){
        return a/b;
    }
};
int main(){
BasicCalculator*ptr =new Calculator;
cout<< ptr->add(5,7);
cout<<ptr->divide(6.02,3.14);
}