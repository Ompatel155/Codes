#include<iostream>
using  namespace std;
int main(){
    string s="OM ";
    cout<<s<<" "<<s.length()<<"\n";
    s= s + "PATEL ";
    cout<<s<<" "<<s.length()<<"\n";
    s= "PATEL " + s;
    cout<<s<<" "<<s.length()<<"\n";
    
}