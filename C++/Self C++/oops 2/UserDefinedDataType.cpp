#include<iostream>
using namespace std;
class Student
{
    public:
    string  name;
    int rollno;
    float cgpa;

};

int main(){
Student s1;
s1.name ="om patel";
s1.rollno = 219;
s1.cgpa = 7.19;
cout<<s1.name<<endl<<s1.rollno<<endl<<s1.cgpa;
}