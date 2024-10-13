// Bubble sort
#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArr(int ar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {6, 4, 8, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    printArr(arr, n);
    return 0;
}