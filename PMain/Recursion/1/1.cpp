// Print Name N times using Recursion
#include <iostream>
using namespace std;

void f(int i, int n)
{
    if (i > 2)
    {
        return;
    }
    cout << "A";
    f(i + 1, n);
}
int main()
{
    int n = 4, i = 0;
    f(i, n);
    return 0;
}