#include<iostream>
using namespace std;

bool ratInMaze(char maze[][5],int ans[4][4],int i,int j,int n,int m){
	// base case
	if(i==n-1 and j==m-1){
		ans[i][j] = 1;
		for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
				cout<< ans[k][l] <<" ";
			}
			cout<< endl;
		}
		return true;
	}

	// recursive case
	ans[i][j] = 1;
	if(j+1 < m and maze[i][j+1]!='X'){
		bool ansfromright = ratInMaze(maze,ans,i,j+1,n,m);
		if(ansfromright==true){
			return true;
		}
	}
	if(i+1 < n and maze[i+1][j]!='X'){
		bool ansfromdown = ratInMaze(maze,ans,i+1,j,n,m);
		if(ansfromdown==true){
			return true;
		}
	}
	ans[i][j] = 0;
	return false;
}

int main(){
	char maze[][5] = {
		"00X0",
		"00X0",
		"X000",
		"00X0"
	};

	int ans[4][4] = {0};

	ratInMaze(maze,ans,0,0,4,4);

	return 0;
}