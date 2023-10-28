#include<iostream>
using namespace std;

void subseq(char * in,char * out,int i,int j){
	// base case
	if(in[i]=='\0'){
		out[j] = '\0';
		cout << out <<endl;
		return;
	}

	// recursive case
	subseq(in,out,i+1,j);
	out[j] = in[i];
	subseq(in,out,i+1,j+1);
}

int main(){
	char in[100] = "abc";
	char out[100];
	subseq(in,out,0,0);
	return 0;
}
