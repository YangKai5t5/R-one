// Reverse array using recursion
#include <iostream>
using namespace std;

void printArr(int ar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ar[i];
    }
    cout<<endl;
}
void rev(int i, int ar[], int size)
{
    if (i >= size / 2)
    {
        return;
    }
    swap(ar[i], ar[size - i - 1]);
    rev(i + 1, ar, size);
}
int main()
{
    int ar[] = {1, 2, 3, 4};
    int size = sizeof(ar) / sizeof(ar[0]);
    printArr(ar, size);
    rev(0, ar, size);
    printArr(ar, size);
    return 0;
}
