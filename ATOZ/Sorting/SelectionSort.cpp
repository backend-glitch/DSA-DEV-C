#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, 3, 1, 4, 2};

    int n = 5;

    for(int i = 0; i < n - 1; i++) {

        int minIndex = i;

        // Find minimum element
        for(int j = i + 1; j < n; j++) {

            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap
        swap(arr[i], arr[minIndex]);
    }

    // Print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}