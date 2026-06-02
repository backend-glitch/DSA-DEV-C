/*sum of numbers*/

#include<iostream>
using namespace std;

int sum(int n){
    // base
    if(n == 0) return 0;

    // call
    return n + sum(n-1);

}
int main(){
    int n;
    cin>>n;

    int ans = sum(n);
    cout<<ans;
    
}