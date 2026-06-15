#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*
flow :
1.take initial element as minimum
2.traverse through loop
3.calulate todays profit 
4.compare it with your profit variable
5. then take min of current value and minimum variable 
6.return  profit.
*/


int main(){

    vector<int> nums = {1,2,4,3,6,5,8,0};

    int n = nums.size();

    int mini = nums[0];
    int profit = 0;

    for(int i=0;i<n;i++){

        int cost = nums[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, nums[i]);
    }

    cout<<profit<<endl;

}