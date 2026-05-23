#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    return 0;
}
int main(){
    cout << gcd(48,18);
}