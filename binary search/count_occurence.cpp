#include <iostream>
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

int lastOccurrence(int arr[], int n, int target)
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
            start = mid + 1;
        }
    }

    return ans;
}

int countOccurrences(int arr[], int n, int target)
{
    int first = firstOccurrence(arr, n, target);

    if (first == -1)
    {
        return 0;
    }

    int last = lastOccurrence(arr, n, target);

    return last - first + 1;
}

int main()
{
    int arr[] = {2, 4, 6, 6, 6, 8, 10};
    int n = 7;
    int target = 6;

    cout << "First Occurrence : " << firstOccurrence(arr, n, target) << endl;
    cout << "Last Occurrence  : " << lastOccurrence(arr, n, target) << endl;
    cout << "Count            : " << countOccurrences(arr, n, target) << endl;

    return 0;
}