// CREATING VECTOR ..... 
#include <iostream>
#include <vector>
using namespace std ;

int main() {
    int row , col ;
    cin>>row>>col ;
    int val =1;
    vector<vector<int>> vec;
    for(int i = 0 ; i <row ;i++){
        // vec[i] -> vector
        vector<int> temp;
        for(int j = 0 ; j < col ;j++){
            temp.push_back(val) ;
            val++ ;
        }
        vec.push_back(temp) ;
    }
    
    for(int i = 0 ; i < row ; i++){
        for(int j =0 ; j <col;j++){
            // vec[i] -> vector
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}