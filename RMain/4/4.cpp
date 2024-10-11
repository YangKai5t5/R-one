// Find the frequency of characters from the given string

#include <bits/stdc++.h>
using namespace std;

void checkFrequency(const string &str)
{
    unordered_map<char, int> freq;
    for (char ch : str)
    {
        freq[ch]++;
    }
    for (const auto &pair : freq)
    {
        cout << pair.first << " - " << pair.second << endl;
    }
}

int main()
{
    string str = "AABCDEFGHH";
    checkFrequency(str);
}
