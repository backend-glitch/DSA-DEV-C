#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*
13-06-2026
flow :
1.take three pointers low ,mid and high
2.set low = 0, mid = 0 ,high = n-1.
3. while low <= high , traverse when mid element = 0, swap element of low and mid , update low and mid. 
4. if element of mid = 1, then update mid.
5. if elment of mid = 2 ,swap element of mid and high.udate high.
*/

void sorted(vector<int> &nums){

    int n = nums.size();

    int low = 0;
    int mid = 0;
    int high = n-1;

    for(int i=0;i<n;i++){

        if(nums[mid] == 0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }

}

int main(){

    vector<int> nums = {0,1,1,0,1,2,2,0,1,1};
 
    sorted(nums);

    for(int i : nums) cout<<i<<" ";

     
}
