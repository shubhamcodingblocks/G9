#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	int s = 0,e=n-1;
	bool found = false;
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==key){
			cout<< "element found at index : "<< mid <<endl;
			found = true;
			break;
		}
		if(a[mid]<key){
			s = mid+1;
		}
		else if(a[mid]>key){
			e = mid-1;
		}
	}
	if(found==false){
		cout<<" element not found "<<endl;
	}
	return 0;
}