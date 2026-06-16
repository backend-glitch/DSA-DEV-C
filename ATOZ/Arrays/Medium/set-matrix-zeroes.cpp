#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
#include<algorithm>

using namespace std;

/*
flow : brute o(n3) : 
1. traverse thrugh the loop .
2. make the the rows and cols function for that element zero.
3. in rows and columns function make all the elements un that row and col -1.
4. then at last take two loops and and make all -1 leement to 0.

flow : better o(n2) :
1. make two vectors rows and colmns .
2. if any element is zero for that element mark rows and cols array value as 1.
3. again traverse and either row r col for element is 1 then mark it 0.
*/

vector<vector<int>> markZero(vector<vector<int>> &matrix, int m , int n){ // better

   int cols[m];
   int rows[n];

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j+++{

        if(matrix[i][j] == 0){
            rows[i] = 1;
            cols[j] = 1;
        }
    }
   }

   
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j+++{

        if(rows[i] || cols[j]){
             matrix[i][j] = 0;
        }
    }
   }
  return matrix;
}

int main(){

    vector<vector<int>> matrix = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};


    return 0;

}