#include <iostream>
#include <vector>
using namespace std;

int findPivotRec(vector<int>& nums, int index, int leftSum, int totalSum) {
    // Base case: end of array
    if (index == nums.size()) return -1;

    // Right sum = totalSum - leftSum - current element
    int rightSum = totalSum - leftSum - nums[index];

    // Check pivot condition
    if (leftSum == rightSum)
        return index;

    // Recursive call for next index
    return findPivotRec(nums, index + 1, leftSum + nums[index], totalSum);
}

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;
    for (int n : nums) totalSum += n;
    return findPivotRec(nums, 0, 0, totalSum);
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int result = pivotIndex(nums);
    cout << "Pivot Index: " << result << endl;
    return 0;
}
