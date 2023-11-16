// Inheritance accessibility->    public      protected   private
// Base class accessibility
//                  public.       public      protected   private
//                  protected     protected   protected   private
//                  private       --------not inheritable--------

#include<iostream>
using namespace std;

class Employee{
protected:
  int id;
  char name[100];
};

class Manager : private Employee{

public:
  char department[100];
  void set_data(int empId,char *n,char *dep){
    id = empId;
    strcpy(name,n);
    strcpy(department,dep);
  }
  void display(){
    cout << "id : " << id << endl;
    cout << "name : " << name << endl;
    cout << "department : " << department << endl;
  }
};

int main(){
  Manager m;
  char name[100] = "Shubham";
  char department[100] = "Software";
  m.set_data(1,name,department);
  m.display();

  return 0;
}