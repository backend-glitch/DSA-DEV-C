#include<iostream>
using namespace std;

int  main(){

    int a,b;
    cin>>a>>b;

    if(a< b){
        cout<<"No";
        return 0;
    }

int a2 = a* 9;
int b2 = b* 16;

if(a2 == b2){
    cout<<"Yes";
}
else{
    cout<<"No";
}

return 0;
}