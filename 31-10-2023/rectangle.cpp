#include<iostream>
using namespace std;

class Rectangle{
	float length;
	float width;
public:
	void setLength(float l){
		length = l;
	}
	void setWidth(float w){
		width = w;
	}
	float parameter(){
		return (length+width)*2;
	}
	float area(){
		return length*width;
	}
	void show(){
		cout << length << " " << width << endl;
	}
	int areaCheck(Rectangle r2){
		return area()==r2.area();
	}
};

int main(){
	
	return 0;
}