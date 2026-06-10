#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


/*
flow:
1.use a unodered map
2.mark all elements frequency
3.elments whose freq is 0 ,that is the answer.
*/

int missing(vector<int> &nums){

    int n = nums.size();

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++){
        mp[nums[i]]++;
    }

    for(int i = 1; i <= n + 1; i++){
        if(mp.find(i) == mp.end()){
            return i;
        }
    }

    return -1;
}

int main(){

    vector<int> nums = {1,2,3,5,6,7};

    int ans = missing(nums);

    cout << ans;
}

/*
optimal : 

int missingNumber(vector<int>& nums) {

    int n = nums.size();

    int ans = n;

    for(int i = 0; i < n; i++) {
        ans ^= i;
        ans ^= nums[i];
    }

    return ans;
}
    */