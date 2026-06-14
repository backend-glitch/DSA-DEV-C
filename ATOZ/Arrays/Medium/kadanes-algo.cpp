#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*
flow :
 1. take two var ,sum =0 and maxSum = 0.
 2. traverse and add element to sum
 3. if sum > maxSum then maxsum = sum 
 4. if sum < 0 , then sum = 0.
 5. return maxSum.
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSum(vector<int>& nums) {

    int sum = 0;
    int maxi = INT_MIN;

    int start = 0, end = 0;
    int tempStart = 0;

    for(int i = 0; i < nums.size(); i++) {

        sum += nums[i];

        if(sum > maxi) {
            maxi = sum;
            start = tempStart;
            end = i;
        }

        if(sum < 0) {
            sum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Maximum Sum = " << maxi << "\n";
    cout << "Subarray: ";

    for(int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }

    return maxi;
}

int main(){

    vector<int> nums = {1,3,-4,9,4,-6,7};

    cout<<maxSum(nums);


    return 0;
}