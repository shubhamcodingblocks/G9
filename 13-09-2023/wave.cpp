#include<iostream>
using namespace std;

int main(){
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	cout<<"matrix: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	//wave print
	for(int col=0;col<3;col++){
		if(col%2==0){
			for(int row=0;row<3;row++){
				cout<<a[row][col]<<" ";
			}
		}
		else{
			for(int row=2;row>=0;row--){
				cout<<a[row][col]<<" ";
			}
		}
	}	
	return 0;
}