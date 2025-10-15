#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0, leftSum = 0;

        // Calculate the total sum of the array
        for (int num : nums) {
            totalSum += num;
        }

        // Iterate through the array and compare left sum with the right sum
        for (int i = 0; i < nums.size(); i++) {
            // If left sum equals the right sum (totalSum - leftSum - nums[i]), return the index
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            // Update the left sum
            leftSum += nums[i];
        }

        // If no pivot index is found, return -1
        return -1;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int pivot = sol.pivotIndex(nums);
    if (pivot != -1)
        cout << "Pivot index is: " << pivot << endl;
    else
        cout << "No pivot index found" << endl;

    return 0;
}
