// tell if number is in ascending ,descending or not in specific order
#include <bits/stdc++.h>
using namespace std;

string checkOrder(int num)
{
    bool ascending = true;
    bool descending = true;
    int previous = num % 10;
    num /= 10;

    while (num > 0)
    {
        int current = num % 10;
        if (current > previous)
        {
            ascending = false;
        }
        if (current < previous)
        {
            descending = false;
        }
        previous = current;
        num /= 10;
    }
    if (ascending)
    {
        return "Digits are in ascending order.";
    }
    else if (descending)
    {
        return "Digits are in descending order.";
    }
    else
    {
        return "Digits are not in any specific order.";
    }
}

int main()
{
    int digit = 345;
    string result = checkOrder(digit);
    cout << result << endl;
    return 0;
}