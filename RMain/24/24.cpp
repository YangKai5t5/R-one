// Sum of digits of given number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 123;
    int sum = 0;
    while (num > 0)
    {
        int last = num % 10;
        sum += last;
        num /= 10;
    }
    cout << sum;
    return 0;
}