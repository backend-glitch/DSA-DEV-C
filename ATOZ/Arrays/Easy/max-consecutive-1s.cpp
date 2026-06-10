#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*
flow:
1.declare count and max variable to 0;
2.traverse for one -> increase count and update max,for zero -> put count back to 0
3.return max
*/

int maxnum(vector<int> &nums){

    int n = nums.size();

    int count = 0;
    int maxima = 0;

    for(int i=0;i<n;i++){

        if(nums[i] == 1) {
            count++;
            maxima  = max(maxima,count);

        }else{ 
            count = 0;
        }

    }

    return maxima;
}


int main(){

    vector<int> nums = {1,1,0,1,1,1,1,0,1,1};

  int ans = maxnum(nums);

  cout<<ans;

  return 0;
}