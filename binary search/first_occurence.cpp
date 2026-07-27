#include<iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}