#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,1};
   bool ispalindrome = true;
   for(int i=0;i<= 3/2;i++){
if(arr[i]!=arr[3-i-1]){
    ispalindrome =false;
    break;
}
   }
   if(ispalindrome){
    cout<<"Array Palindrome hai";
   }
   else{
    cout<<"Array Palindrome nahi hai";
   }
    }

