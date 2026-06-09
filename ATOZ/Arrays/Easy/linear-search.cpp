#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*

flow : 
1.make a bool flag -> false
2. traverse over the array searching for the target
3. if target found ,bool -> true ,break;
4. return the position;
, thats the answer.

*/


void Linear(vector<int> &nums, int target){

    int n = nums.size();

    bool isTarget  = false;

    for(int i=0;i<n;i++){
        if(nums[i] == target){
            isTarget = true;
            break;
        }
    }

    if(isTarget){
        cout<<"Target exists";
    }else{
        cout<<"Target not found";
    }
}


int main(){

    vector<int> nums = {1,2,3,4,5};

    int target = 7;

    Linear(nums,target);


}