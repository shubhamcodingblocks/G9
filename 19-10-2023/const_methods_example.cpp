#include<iostream>
using namespace std;

class BankAccount{
public:
	int balance;
	BankAccount(int b){
		balance = b;
	}
	void display_balance() const{
		cout<<"balance: "<<balance<<endl;
	}
	void withdrawl(int amt){
		balance -= amt;
	}
	void deposit(int amt){
		balance += amt;
	}
};

int main(){
	BankAccount b(10000);
	b.display_balance();
	b.deposit(100);
	b.withdrawl(22);
	b.display_balance();
	return 0;
}