// find two consecutive no in array which have maximum sum

#include <bits/stdc++.h>
using namespace std;

void findMaxSumPair(int arr[], int size)
{
    int maxsum = arr[0] + arr[1];
    int index1 = 0;
    int index2 = 1;

    for (int i = 1; i < size - 1; i++)
    {
        int currentSum = arr[i] + arr[i + 1];
        if (currentSum > maxsum)
        {
            maxsum = currentSum;
            index1 = i;
            index2 = i + 1;
        }
    }
    cout << "The two maximum sum numbers are: " << arr[index1] << " and " << arr[index2] << endl;
}

int main()
{
    int arr[] = {1, 9, 8, 3, 5, 7, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMaxSumPair(arr, size);
    return 0;
}