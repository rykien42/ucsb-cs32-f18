//main.cpp

#include <iostream>
#include "Person.h"

using namespace std;

template<class T>
void printVector(vector<T> v) {
	for (int i = 0; i <v.size(); i++) {
		cout << v[i] << endl;
	}
}

void f() {
	Person* p = new Person();
	delete p;
}


int main() {
	
	// Person s;
	// Person t = s;

	// s.getVector()->push_back(200);
	// printVector(*s.getVector());
	// printVector(*t.getVector());

	// Person s;
	// cout << "&s = " << &s << endl;
	// Person t = s;
	// cout << "&t = " << &t << endl;
	
	// cout << "---" << endl;

	// Person a;
	// Person b;
	// a=b;

	f();

	return 0;

}