//  Variation of Fibonacci The Fibonacci sequence is constructed by adding the last two numbers of the sequence so far to get the next number in the sequence. The first and the second numbers of the sequence are defined as 0 and 1. We get: 0, 1, 1, 2, 3, 5, 8, 13, 21… Write a function which takes input as a number: If the given number is a Fibonacci number, print the number If the given number is NOT a Fibonacci number, print the sum of all even Fibonacci numbers less than the given number. int getFibOutput(int input) { // TODO: } Example (21 is a Fibonacci number) Input: 21 Output: 21 (20 is NOT a Fibonacci number so, output is 10 (2+8)) Input: 20 Output: 10

#include <bits/stdc++.h>
using namespace std;

bool isFibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    int a = 0, b = 1, next = a + b;

    while (next <= n)
    {
        if (next == n)
        {
            return true;
        }
        a = b;
        b = next;
        next = a + b;
    }

    return false;
}

int sumEvenFibonacci(int n)
{
    int a = 0, b = 1, next = a + b, sum = 0;
    while (next < n)
    {
        if (next % 2 == 0)
        {
            sum += next;
        }
        a = b;
        b = next;
        next = a + b;
    }
    return sum;
}

int getFibOutput(int n)
{
    if (isFibonacci(n))
    {
        return n;
    }
    else
    {
        return sumEvenFibonacci(n);
    }
}

int main()
{
    int input1 = 21;
    cout << input1 << " " << getFibOutput(input1) << endl;

    int input2 = 20;
    cout << input2 << " " << getFibOutput(input2) << endl;
    return 0;
}