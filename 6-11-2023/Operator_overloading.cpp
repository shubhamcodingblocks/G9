#include<iostream>
using namespace std;

class Complex{
public:
	int real;
	int imag;
	Complex(int r,int i){ // constructor
		real = r;
		imag = i;
	}
	Complex(int r){ 
		real = r;
		imag = 0;
	}
	Complex operator-(){
		return Complex(-real,-imag);
	}

	Complex operator++(int){ 	// for post increment
		return Complex(++real,++imag);
	}
	Complex operator++(){   // for pre increment
		return Complex(++real,++imag);
	}

	Complex operator--(int){	// for post decrement
		return Complex(--real,--imag);
	}
	Complex operator--(){
		return Complex(real--,imag--);
	}

	void display(){
		if(imag<0){
			cout << real << " -i " << -imag << endl;
		}
		else{
			cout << real << " + i " << imag <<endl;
		}
	}
};

int main(){
	Complex num1(1,2);
	cout << "num1: "<<endl;
	num1.display();
	// Complex negnum1 = -num1;
	// cout << "negnum1: " <<endl;
	// negnum1.display();
	cout << "after pre incrementing: " <<endl;
	++num1;
	num1.display();
	cout << "after post incrementing: " << endl;
	num1++;
	num1.display();
	cout << "after post decrementing: " <<endl;
	num1--;
	num1.display();
	cout << "after pre decrementing: " <<endl;
	--num1;
	num1.display();
	return 0;
}