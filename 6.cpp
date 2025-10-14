#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int x) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                return i; // return index if found
            }
        }
        return -1; // return -1 if not found
    }
};

int main() {
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> x;

    Solution obj;
    int index = obj.search(arr, x);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
