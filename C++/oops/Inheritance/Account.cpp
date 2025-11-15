#include<iostream>
using namespace std;
class Bankaccount{
    int accountNumber;
    int balance;
    public:
    Bankaccount(int acc,int bal){
        accountNumber =acc;
balance =bal;
    }
    Bankaccount(const Bankaccount &obj){
        balance = obj.balance;
        accountNumber =obj.accountNumber;
    }
void add_balance(int amt){
    balance+=amt;
}
void show(){
    cout<<"Account Number :"<<accountNumber<<endl;
    cout<<"Balance :"<<balance<<endl;
}
};
int main(){
Bankaccount b(101,3000);
b.add_balance(300);
Bankaccount b2=b;
b.show();
b2.add_balance(4000);
b2.show();
}