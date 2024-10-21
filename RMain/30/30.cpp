//  Write a function that takes an input parameter as a String. The function should reverse the statement but keep the words intact and print it. Words are separated by dots. (Avoid using inbuilt functions) If input is “i.like.this.program.very.much” Output will be “much.very.program.this.like.i

#include <iostream>
#include <string>
using namespace std;

string reverseWords(const string &s)
{
    string result = "";
    string temp = "";
    int n = s.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '.')
        {
            result += temp + ".";
            temp = "";
        }
        else
        {
            temp = s[i] + temp;
        }
    }
    result += temp; // Add the last word

    return result;
}

int main()
{
    string s = "i.like.this.program.very.much";
    string res = reverseWords(s);
    cout << res << endl;
    return 0;
}
