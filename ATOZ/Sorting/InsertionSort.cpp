#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, 3, 4, 1, 2};

    int n = 5;

    for(int i = 1; i < n; i++) {

        int key = arr[i];

        int j = i - 1;

        // Shift elements
        while(j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];

            j--;
        }

        // Place key at correct position
        arr[j + 1] = key;
    }

    // Print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}