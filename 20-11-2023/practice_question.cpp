// Create two classes named Mammals and 
// MarineAnimals. Create another class 
// named BlueWhale which inherits both the above 
// classes. Now, create a function in each of these 
// classes which prints "I am mammal", "I am a marine 
// animal" and "I belong to both the categories: 
// Mammals as well as Marine Animals" respectively. 
// Now, create an object for each of the above class 
// and try calling
// 1 - function of Mammals by the object of Mammal
// 2 - function of MarineAnimal by the object of MarineAnimal
// 3 - function of BlueWhale by the object of BlueWhale
// 4 - function of each of its parent by the object of BlueWhale


#include<iostream>
using namespace std;

class Mammals{
public:
  void mammal_say(){
    cout << "I am mammal" << endl;
  }
};

class MarineAnimal{
public:
  void say_marine(){
    cout << "I am Marine Animal" << endl;
  }
};

class BlueWhale : public MarineAnimal, public Mammals{
public:
  void say_whale(){
    cout << "I belong to both the categories:  Mammals as well as Marine Animals" << endl;
  }
};

int main(){
  Mammals m;
  m.mammal_say();
  MarineAnimal ma;
  ma.say_marine();
  BlueWhale bw;
  bw.say_whale();
  bw.say_marine();
  bw.mammal_say();
  return 0;
}