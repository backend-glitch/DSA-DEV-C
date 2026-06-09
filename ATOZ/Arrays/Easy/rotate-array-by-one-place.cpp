#include <iostream>
#include <vector> 
using namespace std;

/*
flow :
1.assign temp to first elmment
2.rotate all the other elments to left 
3. then assign last elment temp value
*/


void rotation(vector<int> &nums){

    int n = nums.size();

    int temp = nums[0];

    for(int i=1;i<n;i++) nums[i-1] = nums[i];

    nums[n-1] = temp;
}


int main(){

  vector<int> nums = {1,2,3,4,5};

  rotation(nums);

  for(int i : nums) cout<<i<< " ";

    return 0;
}