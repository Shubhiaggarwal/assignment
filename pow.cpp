#include <iostream>
using namespace std;

long long fastPower(int base, int exp) {
    if (exp == 0)
        return 1;
    long long half = fastPower(base, exp / 2);
    if (exp % 2 == 0)
        return half * half;
    else
        return base * half * half;
}

int main() {
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    cout << base << "^" << exp << " = " << fastPower(base, exp) << endl;
    return 0;
}
