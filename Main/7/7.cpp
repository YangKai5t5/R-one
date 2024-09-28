// Find the kth highest element in an array

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    sort(arr, arr + n, greater<int>());

    int kth_highest = arr[k - 1];

    cout << endl
         << "The number" << " " << k << " " << "highest element is " << kth_highest << endl;

    return 0;
}
