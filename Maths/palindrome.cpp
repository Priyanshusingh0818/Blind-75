#include<iostream>
using namespace std;

int main(){
    int n ;
    int reverse = 0;
    
    cout<<"enter the number ";
    cin>>n;
    int original = n;

    while(n!=0){
        int digit = n%10;
        reverse = reverse * 10 + digit;
        n=n/10;

    }
    if(original == reverse){
        cout<< " Palindrome ";
    }
    else{
        cout<< " Not palindrome ";
    }
    return 0;
}