#include<iostream>
using namespace std;
int main(){
    int n;
    int reverse = 0;
    cout<<"enter the number: ";
    cin>>n;

    while(n!=0){
        int digit = n %10;
        reverse = reverse * 10 + digit;
        n=n/10;
    }
    cout<<"Reversed: "<< reverse;
    return 0;
}