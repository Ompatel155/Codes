#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int brdth;
    Rectangle(int l ,int b){
        length = l;
        brdth = b;
    }
    void area(){
        cout<<"area is :"<<length*brdth;
    }
    void perimeter(){
cout<<"perimeter is :"<<2*(length+brdth);
    }
    void isSquare(){
       if(length==brdth){
        cout<<"rectangle is square";
       }
      else{
        cout<<"rectangle is not square";
    
}
    }
};
int main(){
    Rectangle(12,12);
}