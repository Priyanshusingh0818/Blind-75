#include<bits/stdc++.h>
using namespace std;

int checkpassword(char str[]){
    int len = strlen(str);

    if(len<4){
        return 0;
    }
    if(str[0]>='0'&&str[0]<='9'){
        return 0;
    }
    bool digit = false;
    bool capital = false;

    for(int i = 0;i<len;i++){
        if(str[i]>='0' && str[i]<='9'){
            digit = true;
        }
        if(str[i]>='A' && str[i]<='Z'){
            capital = true;
        }
        if(str[i] == '' || str[i] == '/'){
            return 0;
        }
        if(digit && capital){
            return 1;
        }
    }
    return 0;
}