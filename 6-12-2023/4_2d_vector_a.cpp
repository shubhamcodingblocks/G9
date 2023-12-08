// creating a 2d vector .... 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>  arr[3];
    int val = 1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i].push_back(val);
            val++;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}