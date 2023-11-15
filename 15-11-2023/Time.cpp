#include<iostream>
using namespace std;

class Time{
	int hours;
	int minutes;
	int seconds;
public:
	Time(int h,int m,int s){
		hours = h;
		minutes = m;
		seconds = s;
	}

	Time operator+(Time t){
		int new_seconds = t.seconds + seconds ;
		int carry = new_seconds/60;
		new_seconds = new_seconds % 60;

		int new_minutes = t.minutes + minutes + carry ;
		carry = new_minutes / 60;
		new_minutes = new_minutes % 60;

		int new_hours = t.hours + hours + carry;
		new_hours = new_hours % 24;

		return Time(new_hours,new_minutes,new_seconds);
	}

	void display(){
		cout << hours << " : " << minutes << " : " << seconds << endl;
	}
};


int main(){
	Time t1(11,59,59);
	Time t2(12,59,59);
	t1.display();
	t2.display();
	Time t3 = t1 + t2;
	t3.display();
	return 0;
}