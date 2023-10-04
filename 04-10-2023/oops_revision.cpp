	#include<iostream>
	using namespace std;

	class Car{
	int engine;
	int price;
	public:
	void set(int e,int p){
	engine = e;
	price = p;
	a		}
	int get_engine(){
	return engine;
	}
	int get_price(){
	return price;
	}
	void moving(){
	cout<< "Car is moving"<<endl;
	}
	};

	int main(){
	Car c1;
	c1.set(1100,100000);
	cout << c1.get_engine() <<endl; 
	cout << c1.get_price() <<endl;
	c1.moving();

	Car c2;
	c2.set(1200,100000);
	cout << c2.get_engine() <<endl; 
	cout << c2.get_price() <<endl;
	c2.moving();
	return 0;
	}