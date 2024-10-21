//  Write a function which takes an input parameter as an array of integers and prints the sum of all prime numbers from the given array. If all integers present in the input array are non-prime the program should print sum as 0. Example: Input1: [1, 14, 5, 7] Output: sum=12 Input2: [2, 10, 13, 9] Output: sum=15

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{
    if (a <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int sumOfPrimes(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (isPrime(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{

    int input1[] = {1, 14, 5, 7};

    int size1 = sizeof(input1) / sizeof(input1[0]);

    int sum1 = sumOfPrimes(input1, size1);

    cout << "Sum of primes in input1: " << sum1 << endl; // Output: sum=12

    return 0;
}