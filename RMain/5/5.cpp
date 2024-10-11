// power of 7

#include <iostream>
using namespace std;

// Initial n = 49
// 49 % 7 == 0 -> n = 49 / 7 = 7
// 7 % 7 == 0 -> n = 7 / 7 = 1
// n == 1 -> return true

bool isPowerOfSeven(int n)
{
    if (n <= 0)
        return false;

    while (n % 7 == 0)
    {
        n /= 7;
    }
    return n == 1;
}

int main()
{
    int num = 49;

    if (isPowerOfSeven(num))
    {
        cout << num << " is a power of 7." << endl;
    }
    else
    {
        cout << num << " is not a power of 7." << endl;
    }

    return 0;
}
