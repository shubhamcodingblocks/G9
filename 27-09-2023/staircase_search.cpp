#include<iostream>
using namespace std;

int main(){
	int mat[4][4] = {1,5,9,10,12,15,19,20,25,26,29,31,36,37,38,39};
	int i = 0;
	int j = 3;
	int tar = 18;
	bool found = false;
	while(i<4 and j>=0){
		if(mat[i][j]==tar){
			cout<<"element found"<<endl;
			found = true;
			break;
		}
		else if(mat[i][j]<tar){
			i++;
		}
		else if(mat[i][j]>tar){
			j--;
		}
	}
	if(found==false){
		cout<<"element not found"<<endl;
	}
	return 0;
}