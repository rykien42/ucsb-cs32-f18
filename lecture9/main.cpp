// main.cpp

#include <iostream>
#include <string>
#include "tddFuncs.h"
#include "student.h"
#include "person.h"

using namespace std;

int main() {

	// Person p1("chris gaucho", 18);
	// Student s1("jane doe", 20, 1234567);
	Person p3 = Person("P3", 10);
	Student s3 = Student("s3", 21, 1234367);
	Student* s4 = new Student("s4", 20, 8918379);
	Person* p2 = s4;

	delete p2;

	// Student* s3 = p3;
	// Person* p4 = s3;

	// delete p3;
	// cout << "---" << endl;
	// delete s3;

	// cout << p1.getName() << endl;
	// cout << p1.getAge() << endl;

	// cout << s1.getName() << endl;
	// cout << s1.getAge() << endl;
	// cout << s1.getPerm() << endl;

	cout << p3.getName() << endl;
	cout << p3.getAge() << endl;
	cout << p3.toString() << endl;
	cout << s3.toString() << endl;
	// cout << p2->toString() << endl;
	// cout << p4->getPerm() << endl;


	return 0;
}