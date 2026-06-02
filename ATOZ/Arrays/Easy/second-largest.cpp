#include<climits>
#include<vector>
#include<iostream>
using namespace std;

/*
flow : 

1.take initial as largest; and seclargest -> -1
2. if element is greater than largest then assign seclargest -> largest and largest -> element
3.else seclargest -> element
4. return seclargest


*/

int seclargest(vector<int> &nums, int n){

    int greatest = nums[0];
    int secgreatest = INT_MIN;

    for(int i=1;i<n;i++){

        if(nums[i] > greatest){
             secgreatest = greatest;
            greatest = nums[i];
           
        }else if( nums[i] < greatest && nums[i] > secgreatest){
            secgreatest = nums[i];

        }

    }
     return secgreatest;
}

int secsmallest(vector<int> &nums,int n){

    int smallest = nums[0];
    int secondsmallest = INT_MAX;

    for(int i=0;i<n;i++){

        if(nums[i] < smallest){
            secondsmallest = smallest;
            smallest = nums[i];
        }else if(nums[i] > smallest && nums[i] < secondsmallest){
            secondsmallest = nums[i];
        }
    }
    return secondsmallest;
}


int main(){

    vector<int> nums = {2,5,6,1,9};

    int ans = seclargest(nums, 5);
    int ans2 = secsmallest(nums,5);

    cout<<"second-smallest :"<<ans2;
    cout<<"second-greatest :"<<ans;
}
