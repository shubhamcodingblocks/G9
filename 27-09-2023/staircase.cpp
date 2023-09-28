#include<iostream>
using namespace std;

int main(){
	int mat[4][4] = {1,5,9,10,12,15,19,20,25,26,29,31,36,37,38,39};
	int n = 4,m=4;
	int key = 26;
	int row = 0, col = m-1;
	bool found = false;
	while(row<n and col>=0){
		if(mat[row][col] == key){
			cout<< " element is present "<<endl;
			found = true;
			break;
		}
		if(mat[row][col] < key){
			row++;
		}
		else if(mat[row][col]>key){
			col--;
		}
	}
	if(found==false){
		cout<<"element is not found "<<endl;
	}
	return 0;
}