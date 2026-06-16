#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
#include<algorithm>

using namespace std;

/*
flow : 
1. take the transpose.
2. reverse all the rows.
3.that the rotated matrix !!
*/

void rotate(vector<vector<int>> &matrix){

    int n = matrix.size();

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }


    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }

}

int main(){


}