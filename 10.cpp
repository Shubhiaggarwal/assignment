#include <iostream>
using namespace std;

class Solution {
public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int count = 0;
        int original = n;  // store the original number

        while (n > 0) {
            int digit = n % 10;   // extract the last digit
            if (digit != 0 && original % digit == 0) {
                count++;          // increment count if digit divides original
            }
            n = n / 10;           // remove the last digit
        }

        return count;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = sol.evenlyDivides(n);
    cout << "Number of digits that evenly divide " << n << " is: " << result << endl;

    return 0;
}
