// Second minimum value from array

#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int ar[], int size)
{
    int first = INT16_MAX, second = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        if (ar[i] < first)
        {
            second = first;
            first = ar[i];
        }
        else if (ar[i] < second && ar[i] > first)
        {
            second = ar[i];
        }
    }
    return second;
}
int main()
{
    int ar[] = {1, 2, 3, 6, 7, 5};
    int size = sizeof(ar) / sizeof(ar[0]);
    int result = secondSmallest(ar, size);
    cout << result << endl;
    return 0;
}