#include<iostream>
using namespace std;


class Complex{
	int real;
	int imag;
public:
	void set(int r,int i);
	int get_real();
	int get_imag();
	void subtract(Complex n2){
		int new_real = real - n2.get_real();
		int new_imag = imag - n2.get_imag();
		cout<<new_real<<" i"<<new_imag<<endl;
	}
};

void Complex::set(int r,int i){
	real = r;
	imag = i;
}

int Complex::get_real(){
	return real;
}

int Complex::get_imag(){
	return imag;
}

int main(){
	Complex n1;
	n1.set(10,5);
	Complex n2;
	n2.set(5,2);
	n1.subtract(n2);
	return 0;
}