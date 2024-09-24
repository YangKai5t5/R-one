// Function to find the maximum number of consecutive 1's in a binary array

#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int nums[], int size) {
    int maxCount = 0, currentCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (nums[i] == 1) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }
    
    return maxCount;
}

int main() {
    int nums[] = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << "Maximum consecutive ones: " << findMaxConsecutiveOnes(nums, size) << endl;
    return 0;
}

