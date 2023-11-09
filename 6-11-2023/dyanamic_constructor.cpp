#include<iostream>
using namespace std;

class Car{
public:
	char *name;
	int * price;
	int * mileage;
	int * seats;

	Car(char* n,int p,int m,int s){ // constructor
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price = new int;
		mileage = new int;
		seats = new int;
		*price = p;
		*mileage = m;
		*seats = s;
	}

	Car(Car &X){								// deep copy
		cout << "copy constructor called. "<<endl;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price = X.price;
		mileage = X.mileage;
		seats = X.seats;
	}

	// Car(Car &X){                                    // shallow copy
	// 	name = X.name;
	// 	price = X.price;
	// 	mileage = X.mileage;
	// 	seats = X.seats;
	// }

	void display(){
		cout << "name: " << name <<endl;
		cout << "price: " << *price <<endl;
		cout << "mileage: " << *mileage <<endl;
		cout << "seats: " << *seats <<endl;
		cout << endl;
	}

	~Car(){ // destructor
		delete[] name;
		name = NULL;
	}
};

int main(){
	char name[] = "BMW";
	Car C(name,100,5,4);
	Car D = C;
	Car E(C);
	E.name[0] = 'A';
	C.display();
	D.display();
	E.display();
	return 0;
}