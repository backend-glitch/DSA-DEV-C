#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*
flow : (here in this question +ve and -ve are equal)
1. take two pointers positiveIndex and negativeIndex
2. take a new vector array
3. if num < 0 then new[negIndex] = nums[i] , else same for  positiveIndex
4.update the pointers also 
5. return new vector.
*/


/*
for equal signs : 

vector<int> rerarrange(vector<int>&nums){

    int n = nums.size();

    int positiveIndex = 0;
    int negativeIndex = 1;

    vector<int>ans(n,0);

    for(int i=0;i<n;i++)
    {

        if(nums[i] < 0 ){
            ans[negativeIndex] = nums[i];
            negativeIndex+= 2;
        }else{
            ans[positiveIndex] = nums[i];
            positiveIndex+= 2;
        }

}
   return ans;
}

*/

// for unequal signs or general : 
/*
flow  : 
1. take two vectors positive and negative.
2. add respective elements in it through loop.
3. check for which sign is greater.
4. first arrange the elements while both signs are equal.
5.if pos > neg , then make an index = 2 * neg and put the remaining elements using that.
*/
vector<int> rerarrange(vector<int>&nums){

    int n = nums.size();
    
    vector<int> pos,neg;

    for(int i=0;i<n;i++){
        if(a[i] > 0) {
            pos.push_back(nums[i]);
        }else{
            neg.push_back(nums[i]);
        }
    }

    if(pos.size() > neg.size()){
        for(int i=0;i<neg.size();i++){
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }

        int index = neg.size() * 2;
        for(int i=neg.size(); i<pos.size();i++){
            nums[index] = pos[i];
            index++;
        }
    } else{

           for(int i=0;i<pos.size();i++){
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }

             int index = pos.size() * 2;
        for(int i=pos.size(); i<neg.size();i++){
            nums[index] = neg[i];
            index++;
        }
    }

    return nums;
}

int main(){

    vector<int> nums = {3,1,-2,-5,2,-4};

    vector<int> ans = rerarrange(nums);

    for(int i : ans) cout<<i<<" ";

    return 0;

}