#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int first=0;
    int second = 1;
    int n;

    if(n>=1){
        cout<<first<<"";
    }
    if(n>=2){
        cout<<second<<"";
    }
    for(int i =3;i<=n;i++){
        int third = first + second;

        cout<<third<<"";

        first = second;
        second=third;
    }


    }