#include<iostream>
using namespace std;


class Dog{
private:
	char name[100];
	char species[100];
	int age;
public:
	void set(char *n,char * s,int a);
	int get_age();
	char * get_name();
	char * get_species();
};

void Dog::set(char *n,char *s,int a){
	strcpy(name,n);
	strcpy(species,s);
	age = a;
}

int Dog::get_age(){
	return age;
}

char * Dog::get_name(){
	return name;
}

char * Dog::get_species(){
	return species;
}

int main(){
	Dog d;
	char name[100] = "abc";
	char species[100] = "pug";
	d.set(name,species,10);
	cout<<"age: "<<d.get_age()<<endl;
	cout<<"species: "<<d.get_species()<<endl;
	cout<<"name: "<<d.get_name()<<endl;
	return 0;
}