#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
flow : 
1.take two pointers i and j
2. i initially at first non-zero  elment, j initially at -1 ,find first zeroth elment for j
3. i -> wait for non zero elment in j , j -> traverse the whole array and search for zero
4. at getting non-zero elment at j , swap the numbers in i  and j
5.repeat till end; 
*/

void moveZeroes(vector<int> &nums){

    int n = nums.size();

    int i = -1;

    for(int j =0;j<n;j++){
        if(nums[j] == 0){
         i = j;
        break;
        }
           }

           if(i == -1) return;

           for(int j=i+1;j<n;j++){

            if(nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }

int main(){

    vector<int> nums = {1,0,0,2,0,3,4};

    moveZeroes(nums);

    for(int i : nums) cout<<i<< " ";

    return  0;
}