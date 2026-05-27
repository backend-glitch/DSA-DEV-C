#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    // Base case
    if(n == 1)
        return;

    // One bubble pass
    for(int i = 0; i < n - 1; i++) {

        if(arr[i] > arr[i + 1]) {

            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call
    bubbleSort(arr, n - 1);
}

int main() {

    int arr[] = {5, 1, 4, 2, 8};

    int n = 5;

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}