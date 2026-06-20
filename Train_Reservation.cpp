#include<iostream>
#include<vector>
using namespace std;

int main(){

    int train;
    char name[100];
    cin>>train>>name;

    
   vector<vector<char>>  matrix(train, vector<char>(5));

    for(int i=0;i<train;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
        }
    }

    int trainChar = name[0] - 'A';

    bool isVacant = false;
    for(int i=0;i<train;i++){

        if(matrix[i][trainChar] == 'o'){
            isVacant = true;
            
        }
    }

    if(isVacant){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    
    return 0;
}