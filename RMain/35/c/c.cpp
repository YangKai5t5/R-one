// non duplicate int from array

#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> countFreq(int arr[], int n)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    return freq;
}

void printNonDuplicate(int arr[], int n)
{
    unordered_map<int, int> freq = countFreq(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printNonDuplicate(arr, n);

    return 0;
}