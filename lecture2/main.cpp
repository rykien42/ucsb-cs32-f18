//main.cpp

#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <utility>

using namespace std;

template <class T>
void printVector(vector<T> &v) {
	for (int i=0; i<v.size(); i++) {
		cout << "v[" << i << "] =" << v[i] << endl;
	}
	return;
}

int main() {

	// pointers to vectors

	// vect	// set<string> s;
	// s.insert("Harry");
	// s.insert("Hermione");
	// s.insert("Ron");
	// s.insert("Harry");
	// s.insert("Snape");

	// for (set<string>::iterator i = s.begin(); i != s.end(); i++) {
	// 	cout << *i << endl;
	// }

	// if (s.find("Harry") != s.end()) {
	// 	cout << "Harry exists!" << endl;
	// }
	// else {
	// 	cout << "Harry DNE" << endl;
	// }

	// if (s.find("Hagrid")!= s.end()) {
	// 	cout << "Hagrid exists!" << endl;
	// } else {
	// 	cout << "Hagrid DNE" << endl;
	// }or<int>* v = new vector<int>(10,1);
	// cout << v->size() << endl; // (*v).size() == v->size()
	// printVector(*v);

	// vector<int> v;

	// for (int i = 0; i < 5; i++) {
	// 	v.push_back(i);
	// }

	// for (vector<int>::iterator i = v.begin(); i < v.end(); i++) {
	// 	cout << *i << endl; //iterators are not pointers
	// }

	// vector<string> v2;
	// v2.push_back("hello");
	// v2.push_back("my");
	// v2.push_back("name");
	// v2.push_back("is");
	// v2.push_back("rumpeltstiltskin");

	// for (vector<string>::iterator i = v2.begin(); i < v2.end(); i++) {
	// 	cout << *i << " ";
	// 	cout << i->size() << endl;
	// }

	// vector<string>::iterator i = v2.begin();
	// cout << v2[4] << endl;
	// cout << i[4] << endl;
	// cout << *(i + 4) << endl;

	// // v2.erase(v2.begin() + 2);
	// v2.erase(v2.begin() + 1, v2.begin() + 3);
	// printVector(v2);

	// set<string> s;
	// s.insert("Harry");
	// s.insert("Hermione");
	// s.insert("Ron");
	// s.insert("Harry");
	// s.insert("Snape");

	// for (set<string>::iterator i = s.begin(); i != s.end(); i++) {
	// 	cout << *i << endl;
	// }

	// if (s.find("Harry") != s.end()) {
	// 	cout << "Harry exists!" << endl;
	// }
	// else {
	// 	cout << "Harry DNE" << endl;
	// }

	// if (s.find("Hagrid")!= s.end()) {
	// 	cout << "Hagrid exists!" << endl;
	// } else {
	// 	cout << "Hagrid DNE" << endl;
	// }

	map<int, string> students; //mapping studentIDs to names
	students[10] = "Richert";
	students[20] = "Jane Doe";
	students[30] = "John Doe";

	cout << "students[20] = " << students[20] << endl;

	//check if sudentID exists
	if (students.find(10) == students.end()) {
		cout << "Did not find Student" << endl;
	} else {
		cout << "Found Student!" << endl;
	}

	students.insert(pair<int, string>(2, "Chris Gaucho"));
	cout << students[2] << endl;

	// Erase by iterator

	map<int. string>::iterator p = students.find(2);
	students.erase(p);

	//erase by key
	students.erase(10);

	for (map<int, string>::iterator i = students.begin(); i != students.end(); i++) {
		cout << i->first << endl;
	}


	return 0;

}