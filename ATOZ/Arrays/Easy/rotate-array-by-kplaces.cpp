#include <iostream>
#include <vector> 
#include<algorithm>

using namespace std;

/*
flow : 
1. do k = k%n to reduce extra rotations
2. reverse arr[0] to arr[0+d]
3.then reverse arr[d+1] to arr[n-1]
4.then reverse the final array
5. thats the answer
*/

void reversearr(vector<int> &nums,int start, int end){

    while(start <= end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

void rotationk(vector<int>& arr, int k) {

    int n = arr.size();

    k = k % n;

    reversearr(arr,0,k-1);
    reversearr(arr,k,n-1);
    reversearr(arr,0, n-1);
}

int main() {

    vector<int> arr = {1,2,3,4,5,6,7};

    int k = 3;

    rotationk(arr, k);

    for(int i : arr)
        cout << i << " ";

    return 0;
}