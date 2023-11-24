#include<iostream>
using namespace std;

class Time{
public:
  int hours;
  int minutes;
  Time(int min){
    hours = min / 60;
    minutes = min % 60;
  }
  void display(){
    cout << "time: " << hours << " : " << minutes << endl;
  }
  // explicit operator int(){
  //   return hours * 60 + minutes;
  // }
  operator int(){
    return hours * 60 +minutes;
  }
};

int main(){
  Time t = 122;
  t.display();
  int x = t;
  cout << x << endl;
  return 0;
}


