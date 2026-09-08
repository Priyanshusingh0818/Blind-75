#include<bits/stdc++.h>
using namespace std;
int calculatebinaryoperations(char str[]){
    int len = strlen(str);

    if(len==0){
        return -1;
    }
    int ans = str[0] - '0';

    for(int i = 1;i<len;i+=2){
        char op = str[i];
        int num = str[i+1] - '0';

        if(op == 'A'){
            ans = ans & num;
        }
        else if(op =='B'){
            ans = ans | num;
        }
        else if(op == 'C'){
            ans = ans ^ num;
        }
    }
    return ans;
}