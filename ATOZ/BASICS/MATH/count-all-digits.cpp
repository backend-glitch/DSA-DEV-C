/* count all digits - may 24*/
#include <iostream>
using namespace std;

int countdigits(int n){

    int count = 0;

    // edge case
    if(n == 0) return 1;

    while(n > 0){
        n /= 10;
        count++;
    }

    return count;
}

int main(){
    int n;
    cin>>n;

    int ans = countdigits(n);
    cout<<ans;

}