#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*
flow:
1.make a unordered_map ,stores value and freq
2.return key with freq == 1 ,that the answer
*/

int single(vector<int> &nums){

   int n = nums.size();

   unordered_map<int,int> mp;

   for(int i = 0; i < n; i++){
      mp[nums[i]]++;
   }

   for(int i = 0; i < n; i++){
      if(mp[nums[i]] == 1){
         return nums[i];
      }
   }

   return -1;
}

int main(){

    vector<int> nums = {1,1,2,3,3,4,4};

    cout << single(nums);
}