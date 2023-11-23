// Create a class Shape with method getArea(), inherit two classes: Square 
// and Circle from Shape and override the getArea() method from Shape
// in Square and Circle to Calculate the area of Circle and Square by creating
// an instance of both Square and Circle.

#include<iostream>
using namespace std;

class Shape{
public:
	int getArea(){
		return 0;
	}
};

class Square : public Shape{
	int side;
public:
	Square(int s){
		side = s;
	}
	int getArea(){
		return side * side;
	}
};

class Circle : public Shape{
	int radius;
public:
	Circle(int r){
		radius = r;
	}
	float getArea(){
		return 3.14 * radius * radius;
	}
};

int main(){
	Square s(4);
	Circle c(3);
	cout << s.getArea() << endl;
	cout << c.getArea() << endl;
	return 0;
}	
