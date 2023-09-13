#include<iostream>
using namespace std;

int main(){
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	int sr = 0, er = 2, sc = 0, ec = 3;
	while(sr<=er and sc<=ec){
		// first step : fixing sr and iterate over columns
		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
		}
		// since we dont want to print sr again we should increment it
		sr++;

		// second step : fixing last column and iterate over rows
		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<" ";
		}
		// since we dont want to print ec again we should decrement it
		ec--;

		if(sr<er){
			// third step : fixing last row and iterate over colms( reverse )
			for(int i=ec;i>=sc;i--){
				cout<<a[er][i]<<" ";
			}
			// since we dont want to print er again we should decrement it
			er--;
		}

		if(sc<ec){
			// fourth step : fixing sc and iterate over rows ( reverse )
			for(int i=er;i>=sr;i--){
				cout<<a[i][sc]<<" ";
			}
			// since we dont want to print sc again we should increment it
			sc++;
		}
	}
	return 0;
}