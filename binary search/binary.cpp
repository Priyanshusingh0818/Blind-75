#include<iostream>
using namespace std;

int main() {
    int arr[] = {242, 342, 534};
    int n = 3;
    int target = 342;

    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (target > arr[mid]) {
            start = mid + 1;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else {
            cout << "Element found at index: " << mid;
            return 0;
        }
    }

    cout << "Element not found";
    return 0;
}