// Second highes number without sorting

#include <bits/stdc++.h>
using namespace std;

int findSecondHighest(int arr[], int n)
{
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second; // Return -1 if there is no second highest number
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondHighest = findSecondHighest(arr, n);
    if (secondHighest != -1)
    {
        cout << "The second highest number is " << secondHighest << endl;
    }
    else
    {
        cout << "There is no second highest number." << endl;
    }
    return 0;
}
