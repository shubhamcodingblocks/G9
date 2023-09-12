#include<iostream>
using namespace std;

int main(){
	int a[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	cout<<"row-wise print: "<<endl;
	for(int row=0;row<2;row++){
		for(int col=0;col<3;col++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}

	cout<<"column-wise print: "<<endl;
	for(int col=0;col<3;col++){
		for(int row=0;row<2;row++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}