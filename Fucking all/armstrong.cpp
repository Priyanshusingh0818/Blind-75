#include<iostream>
using namespace std;

int main(){
    int n;
    int original = n;
    int sum =0;

    while(n>0){
        int digit = n % 10;
        sum = sum + (digit * digit * digit);

        n=n/10;
    }
    return original == sum;
}


#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int sum = 0;

    // Count the number of digits
    int digits = 0;
    int temp = n;

    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    // Calculate the sum of each digit raised to 'digits'
    while (temp > 0)
    {
        int digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    return sum == original;
}

int main()
{
    int n;
    cin >> n;

    if (isArmstrong(n))
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not an Armstrong Number";
    }

    return 0;
}