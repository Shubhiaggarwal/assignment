#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        vector<int> num;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }
        
        num.push_back(mini);
        num.push_back(maxi);
        
        return num; // ✅ return the result
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    Solution obj;
    vector<int> ans = obj.getMinMax(arr);
    cout << "Min: " << ans[0] << " Max: " << ans[1] << endl;
    
    return 0;
}
