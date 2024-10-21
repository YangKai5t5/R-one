// write a code to inverse a string without any inbuilt functions

#include <bits/stdc++.h>
using namespace std;

int stringLength(const string &st)
{
    int length = 0;
    while (st[length] != '\0')
    {
        length++;
    }
    return length;
}

void reverseString(string &st)
{
    int n = stringLength(st);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = st[i];
        st[i] = st[n - i - 1];
        st[n - i - 1] = temp;
    }
}
int main()
{
    string st = "ABCD";
    reverseString(st);
    cout << "Reversed string: " << st << endl;
    return 0;
}