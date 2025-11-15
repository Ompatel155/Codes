#include<iostream>
using namespace std;
class student {
public:
string name;
int rollno;
float cgpa;

};
int main(){
    student s1;
    s1.name = "om patel";
    s1.rollno =219;
    s1.cgpa = 7.4;

    student s2;
    s2.rollno =025;
    s2.name = "prince singh";
    s2.cgpa = 7.5;

    cout<<s1.name<<", "<<s1.rollno<<", "<<s1.cgpa<<" \n";
    cout<<s2.name<<", "<<s2.rollno<<", "<<s2.cgpa<<" \n";

}