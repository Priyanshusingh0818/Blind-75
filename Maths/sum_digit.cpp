#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    cout<<"enter the number:";
    cin>>n;
    while(n!=0){
        int digit = n%10;
        sum = sum + digit;
        n=n/10;
    }
    cout<<"sum of digit: "<<sum<<endl;
    return 0;

}