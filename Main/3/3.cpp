// Reverse string

#include <iostream>
using namespace std;

int main()
{
    string str = "ABCD";

    int n = str.length(); // 4
    for (int i = 0; i < n / 2; ++i)
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;
    return 0;
}
