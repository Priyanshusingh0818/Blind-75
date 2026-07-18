#include<stdio.h>

int main(){
    int num, rev = 0;

    printf("Enter the number: ");
    scanf("%d",&num);

    while(num != 0){
        int last = num % 10;      // get last digit
        rev = rev * 10 + last;    // build reversed number
        num = num / 10;           // remove last digit
    }

    printf("The reversed number is: %d", rev);

    return 0;
}