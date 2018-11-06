// student.h

#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student : public Person {
public:
	Student(std::string name, int age, int perm);
	int getPerm();
	void setPerm(int perm);
	std::string getName();
	~Student();
	virtual std::string toString();
private:
	int perm;
};

#endif