/* reversing a number*/
#include<iostream>
using namespace std;

int reversedigits(int n){
    int rev = 0;

    while(n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main(){
    int n;
    cin>>n;

    int ans = reversedigits(n);
    cout<<ans;
    
}