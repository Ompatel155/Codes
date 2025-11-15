#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    float cgpa;
    student(string s,int r,float c){
    name = s;
   rollno = r;
   cgpa = c;
}
};
int main(){
    student s1("Om patel",219,9.4);
cout<<s1.name<<", "<<s1.rollno<<", "<<s1.cgpa<<" \n";
}