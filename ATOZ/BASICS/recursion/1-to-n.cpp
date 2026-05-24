/*print from 1 to n*/
#include<iostream>
using namespace std;

void printn(int n){

    // base
    if(n == 0) return;

    //call
    printn(n-1);
    cout<<n<<endl;
    
    // for ascending -> print after the recusion
    // for descending -> print before the recusion
  
}

int main(){

    int n;
    cin>>n;

    printn(n);
}