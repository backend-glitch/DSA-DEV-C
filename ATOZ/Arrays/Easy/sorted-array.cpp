#include<iostream>
#include<vector>
using namespace std;

/*
flow : 
1.check element >= previous
2.if not then not sorted else sorted

*/

int main(){

    vector<int> arr = {2,3,4,5,8};

    for(int i=1;i<5;i++){

        if(arr[i] >= arr[i-1]){

        }else{
            cout<<"not sorted";
            return 0;
        }
    }
    cout<<"sorted";
}