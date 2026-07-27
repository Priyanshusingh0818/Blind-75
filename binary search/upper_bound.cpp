#include<iostream>
using namespace std;
int upperBound(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int ans = n;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] <= target)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}