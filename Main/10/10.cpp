// find unique element in array using O(n) time and O(1) space complexity.
#include <iostream>
#include <unordered_map>
using namespace std;
// using xor for complexity condition

// Properties of XOR:
// x ^ x = 0 (Any number XORed with itself is 0)
// x ^ 0 = x (Any number XORed with 0 is the number itself)
// Pairs of identical elements will cancel each other out (because x ^ x = 0).
// The unique element will be left as the result (because x ^ 0 = x).

// For the array {1, 2, 3, 2, 1}:

// Initial unique = 0
// After first iteration: unique = 0 ^ 1 = 1
// After second iteration: unique = 1 ^ 2 = 3
// After third iteration: unique = 3 ^ 3 = 0
// After fourth iteration: unique = 0 ^ 2 = 2
// After fifth iteration: unique = 2 ^ 1 = 3
// So, the unique element in the array is 3.
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
// using hashmap
//  void findUniqueElements(int arr[], int n)
//  {
//      unordered_map<int, int> unq;

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
