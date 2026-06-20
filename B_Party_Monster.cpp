
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

  int t;
    cin>>t;

   while(t--){

    int l;
    cin>>l;

    vector<char> v(l);
    for(int i=0; i<l; i++){
        cin>>v[i];
    }

    unordered_map<char, int> mp;

    for(char  ch : v){
        mp[ch]++;
    }

         if(mp['('] == mp[')'] ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    


   }

    return 0;
}