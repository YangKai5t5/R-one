// First non-repeating character from a string

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

char firstNonRepeatingChar(string st)
{
    unordered_map<char, int> Count;
    for (char ch : st)
    {
        Count[ch]++;
    }
    for (char ch : st)
    {
        if (Count[ch] == 1)
        {
            return ch;
        }
    }
    return '\0';
}
int main()
{
    string st = "aabcdc";
    char result = firstNonRepeatingChar(st);
    if (result != '\0')
    {
        cout << result << endl;
    }
    return 0;
}