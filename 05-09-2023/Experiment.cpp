#include<iostream>
using  namespace std;

class Car {
private:
	int price = 100;
public:
	void set_price(int x) {
		if (x > 50) {
			price = 50;
		} else {
			price = price - x;
		}
	}

	int get_price() {
		return price;
	}

};

int main() {
	Car BMW;
	//BMW.price = 0;
	BMW.set_price(90);
	printf("%d", BMW.get_price());
}