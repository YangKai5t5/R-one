//  Add given number until the it less than 9

// EXPLAINATION

// First iteration:

// Sum of digits: 9 + 8 + 7 + 5 = 29

// New number: 29

// Second iteration:

// Sum of digits: 2 + 9 = 11

// New number: 11

// Third iteration:

// Sum of digits: 1 + 1 = 2

// New number: 2

#include <iostream>
using namespace std;

int addDigitsUntilSingleDigit(int num)
{
    while (num >= 9)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main()
{
    int num = 9123;

    int result = addDigitsUntilSingleDigit(num);
    cout << "The result is: " << result << endl;

    return 0;
}
