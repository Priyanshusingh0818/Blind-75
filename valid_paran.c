#include <stdio.h>
#include <stdbool.h>

bool valid(char s[]) {
    char stack[100];
    int top = -1;
    for(int i = 0; s[i] != '\0'; i++) {

        if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
            stack[++top] = s[i];   // push
        }
        else {
            if(top == -1) return false;

            if((s[i]==')' && stack[top]=='(') ||
               (s[i]=='}' && stack[top]=='{') ||
               (s[i]==']' && stack[top]=='[')) {
                top--;  // pop
            }
            else {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    char s[] = "{[}";
    
    if(valid(s))
        printf("True\n");
    else
        printf("False\n");
    return 0;
}