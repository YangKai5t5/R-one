// Write a program to merge two lists by alternatively taking elements from each list. The method will take 2 arrays as input and return the merged array as output. Input: [1,2,3] and [a,b,c] Output: [1,a,2,b,3,c] Input: [1,2,3,4,5] and [a,b,c] Output: [1,a,2,b,3,c,4,5] Input: [1,2,3] and [a,b,c,d,e] Output: [1,a,2,b,3,c,d,e]

#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[])
{
    int i = 0, j = 0, k = 0;

    // Single loop to merge arrays
    while (i < size1 || j < size2)
    {
        if (i < size1 && (j >= size2 || arr1[i] <= arr2[j]))
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, merged);

    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
