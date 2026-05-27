/*fibonacci*/

#include <iostream>
using namespace std;

int fib(int n) {

    // Base cases
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    // Recursive relation
    return fib(n - 1) + fib(n - 2);
}

int main() {

    int n;
    cin >> n;

    cout << fib(n);
}