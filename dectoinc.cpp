#include <iostream>
using namespace std;

void printDecreasingIncreasing(int n) {
    if (n == 0) return;           // base case
    cout << n << " ";             // print while going down
    printDecreasingIncreasing(n - 1);
    cout << n << " ";             // print while coming back
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printDecreasingIncreasing(n);
    return 0;
}
