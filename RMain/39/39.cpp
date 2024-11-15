//  Reverse a string order without changing the order of words in it.

#include <iostream>
using namespace std;

// Function to reverse a section of the string
void reverseSection(char str[], int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse the string while preserving the order of words
void reverseStringPreserveWords(char str[])
{
    int n = 0;
    while (str[n] != '\0')
    {
        n++;
    }

    // Reverse the entire string
    reverseSection(str, 0, n - 1);

    // Reverse each word in the reversed string
    int start = 0;
    for (int end = 0; end <= n; end++)
    {
        if (str[end] == ' ' || str[end] == '\0')
        {
            reverseSection(str, start, end - 1);
            start = end + 1;
        }
    }
}

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    reverseStringPreserveWords(str);

    cout << "Reversed string with words preserved: " << str << endl;

    return 0;
}
