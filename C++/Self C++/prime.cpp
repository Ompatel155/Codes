#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n = 11;
    bool IsPrime = true;
    for(int i = 2;i<sqrt(n); i++){
        if(n%i==0){
            IsPrime = false;
            break;
        }
    }

    if(IsPrime){
        cout<<n<<" Is a prime number";
    }else{
        cout<<n<<" Is not a prime number";
    }
}