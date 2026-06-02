/*highest occuring element*/

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

    int maxFreq = 0;

    // Find highest frequency
    for(auto it : freq) {

        if(it.second > maxFreq) {
            maxFreq = it.second;
        }
    }

    cout << "Highest Frequency = " << maxFreq;
}