/* factorial */
#include<iostream>
using namespace std;

int factorial(int n){

    //base 
    if(n == 0 || n == 1) return 1;

    // call
    return n * factorial(n-1);
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans;
    
}