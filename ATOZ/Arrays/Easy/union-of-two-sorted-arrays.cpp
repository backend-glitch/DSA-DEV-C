#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
flow : 
1.make two pointers : i and j
2. i for array-1 and j for array-2
3.check which one small , put it into temp
4. if one of them is overe put the other arr elemnets using while loop
4 retur temp
*/

vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {

    int i = 0, j = 0;
    vector<int> temp;

    while(i < arr1.size() && j < arr2.size()) {

        if(arr1[i] <= arr2[j]) {

            if(temp.empty() || temp.back() != arr1[i])
                temp.push_back(arr1[i]);

            i++;
        }
        else {

            if(temp.empty() || temp.back() != arr2[j])
                temp.push_back(arr2[j]);

            j++;
        }
    }

    while(i < arr1.size()) {

        if(temp.empty() || temp.back() != arr1[i])
            temp.push_back(arr1[i]);

        i++;
    }

    while(j < arr2.size()) {

        if(temp.empty() || temp.back() != arr2[j])
            temp.push_back(arr2[j]);

        j++;
    }

    return temp;
}

int main() {

    vector<int> arr1 = {1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6};

    vector<int> ans = findUnion(arr1, arr2);

    for(int x : ans)
        cout << x << " ";

    return 0;
}