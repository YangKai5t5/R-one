// Neares prime to given number

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int nearestPrime(int num)
{
    if (isPrime(num))
        return num;
    int lower = num - 1;
    int upper = num + 1;

    while (true)
    {
        if (lower >= 2 && isPrime(lower))
        {
            return lower;
        }
        if (isPrime(upper))
        {
            return upper;
        }
        lower--;
        upper++;
    }
}

int main()
{
    int number = 4;
    int nearest_prime = nearestPrime(number);
    cout << "The nearest prime number to " << number << " is: " << nearest_prime;
    return 0;
}