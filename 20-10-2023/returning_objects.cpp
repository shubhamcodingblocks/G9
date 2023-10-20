#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex(int r,int i){ // constructor
		real = r;
		imag = i;
	}
	void display(){
		cout<<real<<" + "<<imag<<" i"<<endl;
	}
	friend Complex add(Complex,Complex);
	friend Complex multiply(Complex,Complex);
};

Complex add(Complex c1,Complex c2){
	int new_real = c1.real+c2.real;
	int new_imag = c1.imag+c2.imag;
	Complex ans(new_real,new_imag);
	return ans;
}

Complex multiply(Complex c1,Complex c2){
	int new_real = c1.real*c2.real - c1.imag*c2.imag;
	int new_imag = c1.real*c2.imag + c2.real*c1.imag;
	Complex ans(new_real,new_imag);
	return ans;
}

int main(){
	Complex a(1,2);
	Complex b(2,3);
	Complex add_ans = add(a,b);
	add_ans.display();
	Complex mul_ans = multiply(a,b);
	mul_ans.display();
	return 0;
}