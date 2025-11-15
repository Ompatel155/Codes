#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    string branch;
   int rollno;
   float cgpa;
};
void print(Student s){
    cout<<s.name<<" "<<s.branch<<" "<<s.rollno<<" "<<s.cgpa<<endl;
}
int main(){
Student s1;
s1.name="om patel";
s1.branch ="CSE";
s1.rollno = 219;
s1.cgpa = 7.19;
Student s2;
s2.name="prince singh";
s2.branch ="CS";
s2.rollno = 025;
s2.cgpa = 7.5;
 print(s1);
 print(s2);
 return 0;

}