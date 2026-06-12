#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
12-06-2026
flow : {better}
1.put elment and index in map
2.find the other remaining value
3.if found then return {index,element} , else store that number and index
4.if loop end , return {-1,-1}

{optimal}
1.take two pointers : left and right
2.sort the array
3.while left < right ,take sum = rightt val + left val
4. if sum < target , left++ else right--
*/

vector<int> twoSum (vector<int> &nums, int target){

    int n = nums.size();

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        int compliment = target - nums[i];

        if(mp.find(compliment) != mp.end()){
            return {i, mp[compliment]}
        }

        mp[nums[i]] = i;
    }

    return -1;

}


int main(){


    vector<int> nums = {2,6,5,8,11};

    int target = 14;

    cout<<twoSum(nums,target);
}