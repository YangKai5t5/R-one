// c++ minimum size subarray sum

#include <iostream>
#include <climits>

int minSubArrayLen(int target, int nums[], int n) {
    int minLength = INT_MAX;
    int left = 0, sum = 0;

    for (int right = 0; right < n; ++right) {
        sum += nums[right];

        while (sum >= target) {
            minLength = std::min(minLength, right - left + 1);
            sum -= nums[left++];
        }
    }

    return (minLength == INT_MAX) ? 0 : minLength;
}

int main() {
    int nums[] = {2, 3, 1, 2, 4, 3};
    int target = 7;
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = minSubArrayLen(target, nums, n);
    std::cout << "Minimum length of subarray: " << result << std::endl;
    return 0;
}
