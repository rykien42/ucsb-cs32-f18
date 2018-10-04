// Person.h

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

class Person {
	public:
		Person();	// default constr
		Person(std::string name, int age); // overloaded constr
		Person(Person& person); //copy constr
		~Person(); //destructor

		//accessors
		std::string getName() const;
		int getAge() const;
		std::vector<int>* getVector() const;
		Person& operator=(const Person& rhs);

		//mutators
		void setName(std::string name);
		void setAge(int age);

	private:
		std::string name;
		int age;
		std::vector<int>* v;
};

#endif