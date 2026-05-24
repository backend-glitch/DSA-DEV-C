/*armstrong number*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int temp = n;

    int digits = 0;

    // Count digits
    while(temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    int sum = 0;

    // Calculate Armstrong sum
    while(temp > 0) {
        int digit = temp % 10;

        sum = sum + pow(digit, digits);

        temp = temp / 10;
    }

    if(sum == original) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not Armstrong";
    }
}