// Two sum problem

#include <iostream>
#include <unordered_map>

using namespace std;

void twoSum(int nums[], int size, int target, int &index1, int &index2)
{
    unordered_map<int, int> num_map;
    for (int i = 0; i < size; ++i)
    {
        int complement = target - nums[i];
        if (num_map.find(complement) != num_map.end())
        {
            index1 = num_map[complement];
            index2 = i;
            return;
        } 
        num_map[nums[i]] = i;
    }
    index1 = -1;
    index2 = -1;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(nums) / sizeof(nums[0]);
    int index1, index2;
    twoSum(nums, size, target, index1, index2);
    if (index1 != -1)
    {
        cout << "Indices: " << index1 << ", " << index2 << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }
    return 0;
}
