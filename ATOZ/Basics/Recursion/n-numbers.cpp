/*n numbers*/
#include<iostream>
using namespace std;

void ntimes(int n){

    //base case
    if(n == 0) return;

    cout<<"hello"<<endl;

    //call
    ntimes(n-1);

}

int main(){

    int n;
    cin>>n;

    ntimes(n);
}