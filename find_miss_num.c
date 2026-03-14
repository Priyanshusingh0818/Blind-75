#include<stdio.h>

int missnum(int arr[], int n) {
    int expsum = n * (n + 1) / 2;
    int actsum = 0;
    for(int i = 0; i < n; i++) {
        actsum += arr[i];
    }
    return expsum-actsum;
}

int main() {
    int arr[] = {3, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Missed: %d", missnum(arr, n));
    return 0;
}