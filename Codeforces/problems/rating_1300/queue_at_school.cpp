/*
During the break the schoolchildren, boys and girls, formed a queue of n people in the canteen. Initially the children stood in the order they entered the canteen. However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second.

Let's describe the process more precisely. Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, at that the person in the position number 1 is served first. Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.

You've got the initial position of the children, at the initial moment of time. Determine the way the queue is going to look after t seconds.

Input
The first line contains two integers n and t (1 ≤ n, t ≤ 50), which represent the number of children in the queue and the time after which the queue will transform into the arrangement you need to find.

The next line contains string s, which represents the schoolchildren's initial arrangement. If the i-th position in the queue contains a boy, then the i-th character of string s equals "B", otherwise the i-th character equals "G".

Output
Print string a, which describes the arrangement after t seconds. If the i-th position has a boy after the needed time, then the i-th character a must equal "B", otherwise it must equal "G".

Examples
InputCopy
5 1
BGGBG
OutputCopy
GBGGB

Why does this make sense?
Think of a small example: "BG" with t=1. At time 0 it's B then G. The rule says boy at position 1, girl at position 2 → after 1 second, swap: now it's G then B. Done. Now imagine "BGG" with t=1: position 1 is B, position 2 is G — that pair swaps. Position 2 (G) and position 3 (G) — no boy there, so nothing happens to that pair. Result after 1 second: "GBG".
The key subtlety: when applying swaps for a given second, you must look at the original arrangement at the start of that second, not the arrangement as you're updating it. If you start modifying the string directly while scanning it left-to-right, you risk using an already-swapped value to make further swap decisions in the same second, which is wrong since all the swaps for that second are supposed to happen simultaneously, based on how things looked at the start of that second.
Approach:

Read the string s.
Repeat this t times: make a copy ns of the current string s. Scan s from left to right; whenever you find s[i] == 'B' and s[i+1] == 'G', set ns[i] = 'G' and ns[i+1] = 'B'. After scanning, set s = ns (this represents one full second passing).
After t iterations, print s.
*/


// SIMULATION

#include<iostream>
using namespace std;
 
int main(){
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    
    for(int time = 0; time < t; time++){
        string ns = s;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                ns[i] = 'G';
                ns[i+1] = 'B';
            }
        }
        s = ns; 
    }
    
    cout << s << endl;
    return 0;
}