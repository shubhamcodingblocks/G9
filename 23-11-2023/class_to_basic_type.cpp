// class to basic type conversion
#include<iostream>
using namespace std;

class Rectangle{
  int length;
  int width;
public:
  Rectangle(int l,int w){
    length = l;
    width = w;
  }
  operator int(){
    return length * width;
  }
  operator double(){
    return 1.01 * length * width;
  }
};

int main(){
  Rectangle r(2,3);
  int x = r;
  cout << x << endl;
  double y = r;
  cout << y << endl;
  return 0;
}