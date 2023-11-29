#include<iostream>
using namespace std;

class Complex{
	int real, imag;
public:
	Complex(int r,int i){
		real = r;
		imag = i;
	}
	Complex operator+(Complex &X){
		int new_real = X.real + real;
		int new_imag = X.imag + imag;
		return Complex(new_real, new_imag);
	}
	void display(){
		cout << real << " + i " << imag << endl;
	}
};

int main(){
	Complex c1(1,2);
	c1.display();
	Complex c2(4,5);
	c2.display();
	Complex c3 = c1 + c2;
	c3.display();
	return 0;
}

