#include<iostream>
using namespace std;
class Myclass{
    public:
    void Mymethod();
        
    };
    void Myclass :: Mymethod(){
        for(int i=0;i<4;i++){
            for(int j=0;j<=i;j++){
           cout<<"* ";
            }
            
            
            cout<<"\n";
        }

    }
    int main(){
        Myclass Myobj;
        Myobj.Mymethod();
    }