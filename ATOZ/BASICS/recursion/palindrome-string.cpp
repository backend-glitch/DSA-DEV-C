#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end) {

    // Base 
    if(start >= end)
        return true;

    if(s[start] != s[end])
        return false;

    // call
    return isPalindrome(s, start + 1, end - 1);
}

int main() {

    string s;
    cin >> s;

    if(isPalindrome(s, 0, s.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}