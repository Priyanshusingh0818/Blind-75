#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int rev = 0;

    int n;
    int original;

    for(int i =0;i<=n;i++){
        int digit = digit % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return original == rev;
}