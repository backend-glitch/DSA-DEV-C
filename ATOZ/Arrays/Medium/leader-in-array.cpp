#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
#include<algorithm>

using namespace std;

/*
flow: 
1. define a var amximum = INT_MIN and a vector ans.
2. travese the loop from end and update the maximum  and put in ans.
3. return ans.
*/


vector<int> leader(vector<int> &nums){

    int n = nums.size();
    vector<int> ans;

    int maxi = INT_MIN;

    for(int i=n-1;i>0;i--){
       
        if(nums[i] > maxi) {
            maxi = nums[i];
            ans.push_back(nums[i]);
        }
       
    }

    return ans;
}

int main(){

    vector<int> nums = {10,22,12,3,0,6};

    vector<int> ans= leader(nums);

    reverse(ans.begin(), ans.end());

    for(int i : ans) cout<<i<<" ";

}