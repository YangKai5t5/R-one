// print 2324 as 2000 300 20 4

#include <bits/stdc++.h>
using namespace std;

int calculateFactor(int num)
{
    int factor = 1;
    while (num / factor >= 10)
    {
        factor *= 10;
    }
    return factor;
}

void printSeparatedNumber(int num)
{
    int factor = calculateFactor(num); 
    while (factor > 0)
    {
        int digit = (num / factor) * factor;
        cout << digit << " ";
        num %= factor;
        factor /= 10;
    }
}

int main()
{
    int num = 2324;
    printSeparatedNumber(num);
    return 0;
}


// Condition: factor > 0 → True

// Calculate Digit: digit = (num / factor) * factor = (2324 / 1000) * 1000 = 2 * 1000 = 2000

// Print Digit: 2000

// Update num: num %= factor = 2324 % 1000 = 324

// Update factor: factor /= 10 = 1000 / 10 = 100