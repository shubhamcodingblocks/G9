#include <iostream>
#include<cstring>
class student
{
private:
	 char name(100);
	 int student_id;
	 int grades(5);
public:
    student(char*n, int si, int *g):
    strcpy(name,n)
    for (int i=0;i<5;i++){
    	grades[i]=g[i];
    }
    student_id = si;
    } 
    void displayInfo(){
    	cout<<"name:"<<name<<endl;
    	cout<<"student id:"<<student_id<<endl
    	cout<<"grades:"<<grades<<endl;
    	for(int i=0;i<5:i++){
    		cout<<grades[i]<<" ";
    	}
    	
    	count<<endl;
    }	 
    friend class gradebook;	
};
class gradebook{
public:
	double computeAverage(student s){
		int score = 0;
		for (int i=0;i<5;i++){
			score += s.grades[i];

		}
		return (score*1.0)/5;

	}
}
int main() {
    int g[5];
    for(int i=0;i<5;i++){
    	g[i] = 49;

    }
    student s("abc",123,g);
    gradebook gg;
    cout<<gg.computeAverage(s);
    

    return 0;
}