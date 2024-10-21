//  Implement the below function to print the frequency of non-vowels (characters which are NOT a, e, i, o, u) in a given string and also print the count of vowels. (Ignore the character cases, it can be lower or upper case) The function will take 1 parameter which will be a String (or a character array). You do not have to write code to get the input parameter from the user. int frequencyOfNonVowels(String input) { if(input) } Example: Input: rajasoft Output: r=1, j=1, s=1, f=1, t=1, vowels=3 Input: Buffet Output: b=1, f=2, t=1, vowels=2

#include <bits/stdc++.h>
using namespace std;

void freq(const string &input)
{
    unordered_map<char, int> map;
    string vowels = "aeiouAEIOU";
    int count = 0;
    for (char ch : input)
    {
        if (vowels.find(ch) != string ::npos)
        {
            count++;
        }
        else
        {
            map[ch]++;
        }
    }
    for (const auto &pair : map)
    {
        cout << pair.first << "=" << pair.second << endl;
    }
    cout << count << endl;
}

int main()
{
    string input = "abcdef";
    freq(input);
    return 0;
}
