#include<stdio.h>
int main(){
    int n,digit;
    int even=0,odd=0;
    printf("enter the numeber:");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        if(digit%2==0){
            even++;
        }
        else{
            odd++;
        }
        n=n/10;
    }
    printf("even digit=%d",even);
    printf("odd digits %d",odd);
    return 0;
}