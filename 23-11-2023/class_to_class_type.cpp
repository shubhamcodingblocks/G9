#include<iostream>
using namespace std;

class B{
public:
  int m;
  int n;
  B(int mm,int nn){
    m = mm;
    n = nn;
  }
  void display(){
    cout << "B: " << m << " " << n << endl;
  }
};

class A{
  int x;
  int y;
public:
  A(int xx,int yy){
    x = xx;
    y = yy;
  }
  void display(){
    cout << "A: " << x << " " << y << endl;
  }
  void operator=(B b){
    x = b.m;
    y = b.n;
  }
};

int main(){
  A a(1,2);
  B b(2,3);
  a.display();
  b.display();
  a = b;
  a.display();
  return 0;
}



