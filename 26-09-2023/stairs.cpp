#include<iostream>
using namespace std;

int ways(int n,int m){
	// base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	// recursive case
	int way = 0;
	for(int i=1;i<=m;i++){
		way += ways(n-i,m);
	}
	return way;
}


int main(){
	int n,m;
	cin>>n>>m;
	cout<< ways(n,m);
	return 0;
}