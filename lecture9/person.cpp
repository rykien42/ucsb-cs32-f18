// person.cpp

#include <string>
#include <iostream>
#include "person.h"

using namespace std;

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
}

string Person::getName() {return name;}

Person:: ~Person() {
	cout << "in person destructor" << endl;
}

int Person::getAge() {return age;}

void Person::setName(string name) {this->name = name;}

void Person::setAge(int age) {this->age = age;}

string Person::toString() {
	return "Person-name:" + getName() + ", age: " + to_string(getAge());
}