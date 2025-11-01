#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    if (n == 0) return 0; // base case
    return arr[n - 1] + sumArray(arr, n - 1); // last element + sum of rest
}

int main() {
    int arr[] = {3, 5, 2, 7};
    int n = 4;

    cout << "Sum of array elements: " << sumArray(arr, n);
    return 0;
}
