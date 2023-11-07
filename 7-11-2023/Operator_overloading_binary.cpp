#include<iostream>
using namespace std;

class Complex{
public:
	int real;
	int imag;

	Complex(int r,int i){
		real = r;
		imag = i;
	}

	void display(){
		cout << real << " + i " << imag <<endl;
	}

	Complex operator-(Complex X){
		int new_real = real - X.real;
		int new_imag = imag - X.imag;
		return Complex(new_real,new_imag);
	}

	Complex operator*(Complex X){
		int new_real = real*X.real - imag*X.imag;
		int new_imag = real*X.imag + imag*X.real;
		return Complex(new_real,new_imag);
	}

	Complex operator+(Complex X){
		int new_real = X.real+real;
		int new_imag = X.imag+imag;
		return Complex(new_real,new_imag);
	}
};

int main(){
	Complex c1(1,2);
	Complex c2(3,4);
	Complex c3 = c1 + c2;
	c3.display();
	return 0;
}