#include <iostream>
using namespace std ;
class student{
    public:
    string name;
    int  static count;
    student(string n):name(n){
count++;
cout<<"student created : "<<count<<"\n";
int student::count=0;
    }
};

int main (){
student s1("om");
student s2("priince");
student s3("raj");
student s4("Raunak");
}