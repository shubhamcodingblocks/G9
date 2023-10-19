#include<iostream>
#include<cstring>
using namespace std;

class Student{
	char name[100];
	int student_id;
	int grades[5];
public:
	Student(char *n,int si,int * g){
		strcpy(name,n);
		for(int i=0;i<5;i++){
			grades[i] = g[i];
		}
		student_id = si;
	}
	void displayInfo(){
		cout<<"name: "<<name<<endl;
		cout<<"student id: "<<student_id<<endl;
		cout<<"grades: "<<endl;
		for(int i=0;i<5;i++){
			cout<<grades[i]<<" ";
		}
		cout<<endl;
	}
	friend class Gradebook;
};

class Gradebook{
public:
	double computeAverage(Student s){
		int score = 0;
		for(int i=0;i<5;i++){
			score += s.grades[i];
		}
		return (score*1.0)/5;
	}
};

int main(){
	int g[5];
	for(int i=0;i<5;i++){
		g[i] = 49;
	}
	Student s("abc",123,g);
	Gradebook gg;
	cout<<gg.computeAverage(s);
	return 0;
}