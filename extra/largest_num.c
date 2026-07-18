#include<stdio.h>
int main(){
    int n,digit;
    int max=0;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        if(digit>max){
            max=digit;
        }
        n=n/10;
    }
    printf("the max is:%d",max);
    return 0;

}