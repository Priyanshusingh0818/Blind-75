#include<stdio.h>

int main(){
    int n , sum =0;
    printf("enter non-negative");
    scanf("%d",&n);

    while(n>0){
        int dig = n%10;
        sum+=dig;
        n=n/10;
    }
    printf("Sum is =%d",sum);
    return 0;
}