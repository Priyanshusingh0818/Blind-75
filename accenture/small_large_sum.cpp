#include<bits/stdc++.h>
using namespace std;

int smalllargesum(int arr[], int n){
    if(n<=3){
        return 0;
    }
    int even1 = -1, even2 = -1;
    int odd1= -1, odd2 = -1;

    for(int i =0;i<n;i++){
        if(i%2==0){
            if(arr[i]>even1){
                even2 = even1;
                even1 = arr[i];
            }
            else if (arr[i]>even2){
                even2 = arr[i];
            }
        }
        else{
            if(arr[i]>odd1){
                odd2 = odd1;
                odd1 = arr[i];
            }
            else if(arr[i]>odd2){
                odd2 = arr[i];
            }
        }
    }
    return even2 + odd2;
}