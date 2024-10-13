// Print 1 to N using recursion
#include <iostream>
using namespace std;
void f(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i;
    f(i + 1, n);
}
int main()
{
    int n = 10, i = 1;
    f(i, n);
    return 0;
}