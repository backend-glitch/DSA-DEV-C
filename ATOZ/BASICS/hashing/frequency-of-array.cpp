/*counting frequency of a array*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {1, 2, 1, 3, 2, 1};

    int n = 6;

    unordered_map<int, int> freq;

    // Count frequency
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequencies
    for(auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
}