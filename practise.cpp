#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int i = 0;
        int j = arr.size() - 1;
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};

int main() {
    int n;
    cin >> n; // Input size of array
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements
    }

    Solution obj;
    obj.reverseArray(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print reversed array
    }
    cout << endl;

    return 0;
}
