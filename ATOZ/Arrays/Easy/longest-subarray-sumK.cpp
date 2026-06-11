#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*
11-06-2026
flow: (for non -ve numbers only)
1. make two pointers left and right , and a sum variable
2. add right pointer value to sum, until it reachs target
3. while sum exceeds target , then subtract left pointer value from sum
4. if target ,then take max of len 
5. when loop end return maxlen.
*/

int longestsub(vector<int>& nums, int target){

    int n = nums.size();

    int left = 0;
    int sum = 0;
    int maxLen = 0;

    for(int right = 0; right < n; right++){

        sum += nums[right];

        while(sum > target){
            sum -= nums[left];
            left++;
        }

        if(sum == target){
            maxLen = max(maxLen, right - left + 1);
        }
    }

    return maxLen;
}