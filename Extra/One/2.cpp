// find the sum of the digits of a given number

#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int number=62;

    int result = sumOfDigits(number);

    cout << "The sum of the digits is: " << result << endl;

    return 0;
}

//o=8