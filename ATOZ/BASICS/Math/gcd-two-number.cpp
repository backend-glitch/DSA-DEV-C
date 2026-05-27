/*gcd of two number*/
#include<iostream>
using namespace std;

int gcd(int a,int b){

    // formula : gcd(a,b) = gcd(a,a%b);

    while( b != 0){
        int temp = b;
        b  = a % b;
         a = temp;
    }

    return a;
}

int main(){
    int n,m;
    cin>>n>>m;

    int ans = gcd(n,m);
    cout<<ans;

}
