// Write your own implementation of parseInt() method

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int parseInt(const string &str)
{
    int result = 0;
    int sign = 1;
    size_t start = 0;

    // Handle negative numbers
    if (str[0] == '-')
    {
        sign = -1;
        start = 1;
    }
    else if (str[0] == '+')
    {
        start = 1;
    }

    // Convert string to integer
    for (size_t i = start; i < str.length(); ++i)
    {
        // if (str[i] < '0' || str[i] > '9') {
        //     cerr << "Error: Invalid input string" << endl;
        //     exit(EXIT_FAILURE);  // Terminates the program
        // }
        result = result * 10 + (str[i] - '0');
    }

    return result * sign;
}

int main()
{
    string str = "-12345";
    int value = parseInt(str);
    cout << "The integer value is: " << value << endl;
    return 0;
}
