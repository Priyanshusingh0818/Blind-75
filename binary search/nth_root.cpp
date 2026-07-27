#include<iostream>
#include<cmath>
using namespace std;
// Function to calculate base^exponent
// Example: power(3, 4) = 3^4 = 81
long long pow(int base, int exponent)
{
    // Initially answer is 1 because
    // any number raised to power 0 is 1.
    long long ans = 1;

    // Multiply 'base' exactly 'exponent' times
    for (int i = 1; i <= exponent; i++)
    {
        ans = ans * base;
    }

    // Return base^exponent
    return ans;
}

// Function to find the Nth root of M
// Returns the root if it exists, otherwise returns -1.
//
// Example:
// n = 3, m = 27  -> returns 3
// n = 3, m = 20  -> returns -1
int nthRoot(int n, int m)
{
    // Possible answers lie between 1 and m
    // (Ignoring 0 because roots of positive numbers start from 1)
    int start = 1;
    int end = m;

    while (start <= end)
    {
        // Find the middle value
        int mid = (start + end) / 2;

        // Calculate mid^n
        long long value = pow(mid, n);

        // If mid^n equals m,
        // then we found the exact nth root.
        if (value == m)
        {
            return mid;
        }

        // If mid^n is smaller than m,
        // then the answer must be on the right side.
        else if (value < m)
        {
            start = mid + 1;
        }

        // If mid^n is greater than m,
        // then the answer must be on the left side.
        else
        {
            end = mid - 1;
        }
    }

    // No integer nth root exists.
    return -1;
}