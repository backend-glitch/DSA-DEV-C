#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
#include<algorithm>

using namespace std;

/*
flow  :
1.make three var count -> to keep count of vurrent length , lastSmaller -> to keep cotn of previous number , and longest -> to keep count of answer length
2.first sort the array.
3. travers ethrough the loop and check if current number is consecutive of previuos .
4. if yes , update count and make it smallerInt , if no then make count = 1, and make it smallerInt
5. compare it with longest . return longest .
*/

int largest(vector<int> &nums){

    int n = nums.size();

    if(n == 0) return 0;

    sort(nums.begin(),nums.end());

    int lastSmaller = INT_MIN;
    int count = 0;
    int longest = 1;

    for(int i=0;i<n;i++){

        if(nums[i] - 1 == lastSmaller){
            count++;
            lastSmaller = nums[i];
        }else{
            count = 1;
            lastSmaller = nums[i]
        }

        longest = max(longest, count);
    }
}

int main(){

    vector<int> nums = {1,2,100,103,3,102};

    cout<<largest(nums)<<endl;
}