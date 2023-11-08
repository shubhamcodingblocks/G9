#include<iostream>
#include<cstring>
using namespace std;

class strings{
public:
	char * str;
	int length;

	strings(char * s){
		str = new char[strlen(s)+1];
		strcpy(str,s);
	}

	strings operator+(strings s1){
		char * ans = new char[strlen(str)+1];
		strcpy(ans,str);
		strcat(ans,s1.str);
		return strings(ans);
	}

	bool operator<(strings s1){
		int ans = strcmp(str,s1.str);
		//cout << ans << endl;
		if(ans<0){
			return true;
		}
		return false;
	}

	bool operator>(strings s1){
		int ans = strcmp(str,s1.str);
		//cout << ans << endl;
		if(ans>0){
			return true;
		}
		return false;
	}

	bool operator==(strings s1){
		int ans = strcmp(str,s1.str);
		//cout << ans << endl;
		if(ans==0){
			return true;
		}
		return false;
	}
};

int main(){
	char temp[] = "defgh";
	char temp2[] = "defgh";
	strings s1(temp);
	strings s2(temp2);
	strings s3 = s1+s2;
	if(s1 < s2){
		cout << "s1 is less than s2 " << endl;
	}
	if(s1 > s2){
		cout << "s1 is greater than s2 " << endl;
	}
	if(s1==s2){
		cout << "s1 is equal to s2 " << endl;
	}
	//strings s4 = s1 + s2;
	cout << s3.str << endl;
	return 0;
}

