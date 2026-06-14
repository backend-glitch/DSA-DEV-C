#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*
flow :

*/


int main(){

    vector<int> nums = {1,2,4,3,6,5,8,0};

    int n = unms.size();

    int mini = nums[0];
    int profit = 0;

    for(int i=0;i<n;i++){

        int cost = nums[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, nums[i]);
    }

    cout<<profit<<endl;

}