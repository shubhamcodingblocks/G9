#include<iostream>
using namespace std;

class Complex{
	int real;
	int imag;
public:
	Complex(int r,int i){
		real = r;
		imag = i;
	}

	void display(){
		cout << real << " + i " << imag << endl;
	}

	friend Complex operator+(Complex X1,Complex X2);
	friend Complex operator-(Complex C1,Complex X2);
	friend Complex operator*(Complex C1,Complex X2);
};


Complex operator+(Complex X1,Complex X2){
	int new_real = X1.real + X2.real;
	int new_imag = X1.imag + X2.imag;
	return Complex(new_real,new_imag);
}

Complex operator-(Complex X1,Complex X2){
	int new_real = X1.real - X2.real;
	int new_imag = X1.imag - X2.imag;
	return Complex(new_real,new_imag);
}

Complex operator*(Complex X1,Complex X2){
	int new_real = X1.real * X2.real - X1.imag * X2.imag;
	int new_imag = X1.real * X2.imag + X1.imag * X2.real;
	return Complex(new_real,new_imag);
}

int main(){
	Complex C1(1,2);
	Complex C2(2,3);

	cout << "addition: " << endl;
	Complex C3 = C1 + C2;
	C3.display();

	cout << "subtraction: " << endl;
	C3 = C1 - C2;
	C3.display();

	cout << "multiplication: " << endl;
	C3 = C1 * C2;
	C3.display();
	return 0;
}