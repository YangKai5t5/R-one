// Find the next prime number of given number

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int nextPrime(int num)
{
    int next = num + 1;
    while (!isPrime(next))
    {
        next++;
    }
    return next;
}

int main()
{
    int num = 7;
    int nextP = nextPrime(num);
    cout << nextP;
    return 0;
}