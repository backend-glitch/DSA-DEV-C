#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {

    int temp[100];

    int left = low;
    int right = mid + 1;

    int k = 0;

    // Merge both halves
    while(left <= mid && right <= high) {

        if(arr[left] <= arr[right]) {
            temp[k++] = arr[left++];
        }
        else {
            temp[k++] = arr[right++];
        }
    }

    // Remaining left half
    while(left <= mid) {
        temp[k++] = arr[left++];
    }

    // Remaining right half
    while(right <= high) {
        temp[k++] = arr[right++];
    }

    // Copy back to original array
    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(int arr[], int low, int high) {

    // Base case
    if(low >= high)
        return;

    int mid = (low + high) / 2;

    // Left half
    mergeSort(arr, low, mid);

    // Right half
    mergeSort(arr, mid + 1, high);

    // Merge sorted halves
    merge(arr, low, mid, high);
}

int main() {

    int arr[] = {5, 3, 8, 4, 2};

    int n = 5;

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}