#include<iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int Breadth;
    rectangle(int l,int b){
     length = l;
     Breadth = b;
    }
    int area(){
        
         return length*Breadth;
    }
    int perimeter(){
         return 2*(length+Breadth);
    }
    void disp(){
        cout<<"Area : "<<area()<<"\nParameter : "<<perimeter();
    }
};
int main(){
 rectangle r(2,4);
r.disp();
}