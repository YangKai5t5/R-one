//  Count occurrence of alphabets in a given sentence.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sentence = "hello howa ARe you";
    unordered_map<char, int> alphabetCount;

    for (char ch : sentence)
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            alphabetCount[ch]++;
        }
    }

    for (auto pair : alphabetCount)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
