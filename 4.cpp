
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int maxVal = *max_element(nums.begin(), nums.end());

       
        vector<int> freq(maxVal + 1, 0);

        
        for (int num : nums) {
            freq[num]++;
        }

        
        int maxFreq = 0;
        for (int i = 0; i <= maxVal; i++) {
            maxFreq = max(maxFreq, freq[i]);
        }

        
        int total = 0;
        for (int i = 0; i <= maxVal; i++) {
            if (freq[i] == maxFreq)
                total += freq[i];
        }

        return total;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.maxFrequencyElements(nums);
    cout << "Total count of max frequency elements: " << result << endl;

    return 0;
}
