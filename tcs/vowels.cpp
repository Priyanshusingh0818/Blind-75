#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int vowels = 0;
    int consonents = 0;
    for(int i =0;i<s.length();i++){
        char ch = tolower(s[i]);
        if (isalpha(ch)){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch=='o' ||  ch =='u'){
                vowels++;
            }
            else{
                consonents++;
            }
        }
    }
    cout<<"vowels = " << vowels<<endl;
    cout<<"consonents ="<< consonets<<endl;
}