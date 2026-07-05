#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int target;
    int start =0;
    int end = n-1;
    int arr[] ={242, 534,342}; 

    while(start<=end){
        int mid = (start + end) / 2;
        if(target>arr[mid]){
            start = mid + 1;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}