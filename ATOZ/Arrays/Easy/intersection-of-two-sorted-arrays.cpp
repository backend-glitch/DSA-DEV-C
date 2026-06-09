#include <iostream>
#include <vector>
using namespace std;

/*
flow : 
1.make two pointers : i and j , temp array
2. i for array-1 and j for array-2
3.check which one small .
4.if i == j and j hasnt come earlier put it in temp and ignore next duplicates
5. i++, j++ 
4 return temp
*/

vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {

    int i = 0, j = 0;
    vector<int> ans;

    while(i < arr1.size() && j < arr2.size()) {

        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr1[i] > arr2[j]) {
            j++;
        }
        else {

            // Avoid duplicates
            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);

            i++;
            j++;
        }
    }

    return ans;
}

int main() {

    vector<int> arr1 = {1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {2, 2, 3, 3, 5, 6};

    vector<int> ans = intersection(arr1, arr2);

    for(int x : ans)
        cout << x << " ";

    return 0;
}