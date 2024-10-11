// Reverse digits of given number.

#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int nReturn = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        nReturn = nReturn * 10 + lastDigit;
        n /= 10;
    }
    return nReturn;
}

int main()
{
    int number = 45;
    int reversed = reverseNumber(number);
    cout << reversed << endl;
}
