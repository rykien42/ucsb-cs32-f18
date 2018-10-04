// Person.cpp

#include <iostream>
#include <string>
#include <vector>
#include "Person.h"

using namespace std;

// default constructor
Person::Person() {
	name = "-";
	age = 0;
	v = new vector<int>();
	v->push_back(100);
	cout << "default constructor" << endl;
}

// construcer overloading
Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
}

//copy Constructor
Person::Person(Person& person) {
	name = person.getName();
	age = person.getAge();
	v = new vector<int>();

	for (int i = 0; i < person.getVector()->size(); i++) {
		v->push_back(person.getVector()->at(i));
	}


	cout << "Copy Constructor" << endl;
}

string Person::getName() const { return name;}

int Person::getAge() const {return age;}

void Person::setName(string name) { this->name = name;}

void Person::setAge(int age) {this->age = age;}

vector<int>* Person::getVector() const {
	return v;
}

// Overloaded assignment operator
Person& Person::operator=(const Person& rhs) {
	//check for self-assignment
	cout << "Overload assignment operator" << endl;
	if (this == &rhs) {
		return *this;
	}

	this->name = rhs.name;
	this->age = rhs.age;
	this->v->clear();

	for (int i = 0; i < rhs.v->size(); i++) {
		v->push_back(rhs.v->at(i));
	}

	return *this;
};

//destructor

Person::~Person() {
	delete v;
	cout << "Deleted v" << endl;
}


