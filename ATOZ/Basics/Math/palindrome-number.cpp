/*Palindrome number*/
#include<iostream>
using namespace std;

bool isPalindrome(int n){

    int rev = 0;
    int temp = n;

    while(n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

   return (temp == rev) ? 1 : 0;
}

int main(){
    int n;
    cin>>n;

    int ans = isPalindrome(n);

    if(ans){
        cout<<"palindrome";
    }else{
        cout<<"not a palindrome";
    }
}