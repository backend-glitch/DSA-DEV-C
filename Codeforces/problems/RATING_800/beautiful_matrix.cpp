
/*

You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

Input
The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

Output
Print a single integer — the minimum number of moves needed to make the matrix beautiful.


Answer : 
Thinking process:

First, picture what a swap actually does: swapping two adjacent cells just shifts the 1 by exactly one cell, either up, down, left, or right (since the rest of the matrix is all zeros, a swap with a neighboring 0 just relocates the 1). So really, the question becomes: "how many single-step moves does it take to walk the 1 from its current position to the center?"
That's a classic Manhattan distance question. If the 1 is at row r and column c (1-indexed), and the center is fixed at (3, 3), then the minimum number of moves is simply |r - 3| + |c - 3| — you move it vertically the right number of steps and horizontally the right number of steps, and there's no shortcut since moves are restricted to adjacent cells (no diagonal jumps).
Approach:

Read the 5×5 grid.
Find the row and column where the value is 1.
Compute |r - 3| + |c - 3| and print it.
*/

// SIMULATION

#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    
 int matrix[5][5];
 int r,c;
 
 for(int i =0;i<5;i++){
     for(int  j=0;j<5;j++){
         
         cin>>matrix[i][j];
         
         if(matrix[i][j] == 1){
             r = i;
             c = j;
         }
         
     }
     
 }
     int moves = abs(r - 2) + abs(c -2);
     cout<<moves<<endl;
 
 
    
}