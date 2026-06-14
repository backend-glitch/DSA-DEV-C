#include<iostream>
#include<vector>
#include<unordered_map>

/*
13-06-2026
flow :
1. make a variable count - 0, and variable ele
2. if count = 0 ,then mark that element  as ele.
3. now traverse , if element  = ele , then update count.
4. else decrease count  if its some other number
5. at last return the ele, thats the answer                                       
*/

using namespace std;

int majority(vector<int> &nums){

    int count = 0;
    int ele;

    for(int i=0;i<n;i++){

        if( count == 0){
            count++;
            ele = nums[i];
            
        }else if(nums[i] == ele){
            count++;
        }else{
            count--;
        }
    }

    return ele;
}

int main(){

    vector<int> nums = {1,2,3,1,1,2,2,3,1};


    cout<<majority(nums);

}