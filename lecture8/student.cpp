// student.cpp

#include <string>
#include "student.h"

using namespace std;

Student::Student(string name, int age, int perm) : Person(name, age) {
	this->perm = perm;
}

int Student::getPerm() {return this->perm;}

void Student::setPerm(int perm) {this->perm = perm;}

string Student::getName() {
	return "STUDENT: " + Person::getName();
}