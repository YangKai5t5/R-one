// find unique element in array using O(n) time and O(1) space complexity.
#include <iostream>
#include <unordered_map>
using namespace std;
//using xor for complexity condition
int findUniqueElement(int arr[], int n)
{
    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        unique ^= arr[i];
    }
    return unique;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int uniqueElement = findUniqueElement(arr, n);
    cout << "The unique element in the array is: " << uniqueElement << endl;
    return 0;
}
//using hashmap
// void findUniqueElements(int arr[], int n)
// {
//     unordered_map<int, int> unq;

//     for (int i = 0; i < n; i++)
//     {
//         unq[arr[i]]++;
//     }

//     cout << "Unique elements in the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         if (unq[arr[i]] == 1)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {1, 2, 1, 3, 2, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     findUniqueElements(arr, n);
//     return 0;
// }
