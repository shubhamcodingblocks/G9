#include<iostream>
using namespace std;

class Rectangle{
	int length,width;
public:
	void set(int l,int w){
		length = l;
		width = w;
	}
	void set(int l){
		length = l;
		width = l;
	}
	void display(){
		cout << "length: " << length << endl << "width: " << width << endl;
	}
};

int main(){
	Rectangle r;
	r.set(1,2);
	r.display();
	Rectangle r1;
	r1.set(1);
	r1.display();
	return 0;
}
