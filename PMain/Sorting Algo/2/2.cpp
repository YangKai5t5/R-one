// Merge sort
#include <iostream>
using namespace std;

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
    int arr[] = {6, 4, 8, 9, 3,5,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    return 0;
}
