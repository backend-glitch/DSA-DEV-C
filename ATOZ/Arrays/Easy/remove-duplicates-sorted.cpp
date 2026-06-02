#include<iostream>
#include<vector>
using namespace std;
/*
flow : 
1.take two pointer i and j
2 i -> moves where element changes , j-> traverse all elements
3.arr[i+1] = j, i++
4. return i+1
*/

int main(){

    int n =10;
    vector<int> arr = {1,2,2,2,3,3,4,4,4,5};

    int i=0;
    vector<int> ans ={};

    for(int j=1;j<n;j++){
           if(arr[j] != arr[i]) {
            arr[i+1] = arr[j];
            ans.push_back(arr[i]);
            i++;

    }
}

    cout<<"length : "<<i+1<<endl;
     
    for(int k :ans) cout<<k;

    return 0;
}