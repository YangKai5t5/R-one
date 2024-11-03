// Anagram

#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string str1, string str2)
{

    if (str1.length() != str2.length())
    {
        return false;
    }

    int count1[256] = {0};
    int count2[256] = {0};

    // Count the frequency of each character in both strings
    for (int i = 0; i < str1.length(); i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // Compare the frequency counts
    for (int i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str1 = "listen";
    string str2 = "silent";

    if (areAnagrams(str1, str2))
    {
        cout << str1 << " and " << str2 << " are anagrams." << endl;
    }
    else
    {
        cout << str1 << " and " << str2 << " are not anagrams." << endl;
    }

    return 0;
}
