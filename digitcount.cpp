#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 0;          // base case
    return 1 + countDigits(n / 10); // remove last digit and count 1
}

int main() {
    int n;
    cin >> n;
    cout << "Number of digits: " << countDigits(n);
    return 0;
}
