#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();

        int idx = -1;

        // Step 1: Find the first decreasing element from the right
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        // If no such element exists, reverse the entire array
        if(idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the next greater element from the right
        for(int i = n - 1; i > idx; i--) {
            if(nums[i] > nums[idx]) {
                swap(nums[i], nums[idx]);
                break;
            }
        }

        // Step 3: Reverse the suffix
        reverse(nums.begin() + idx + 1, nums.end());
    }
};