// student.cpp

#include <string>
#include <iostream>
#include "student.h"

using namespace std;

Student::Student(string name, int age, int perm) : Person(name, age) {
	this->perm = perm;
}

Student::~Student() {
	cout << " in student destructor" << endl;
}

int Student::getPerm() {return this->perm;}

void Student::setPerm(int perm) {this->perm = perm;}

string Student::getName() {
	return Person::getName();
}

string Student::toString() {
	return "Student-name:" + getName() + ", age: " + to_string(getAge()) + ", perm:" + to_string(perm);
}