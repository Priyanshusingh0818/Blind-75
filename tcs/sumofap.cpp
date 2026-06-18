#include<stdio.h>
using namespace std;

class solution{
    public:
    int sumofAP(int d, int a , int n){
        int sum = 0;
        int term = a;
        for(int i = 0;i<n;i++){
            sum = sum + term;
            term = term + d;

        }
        return sum;
    }
};