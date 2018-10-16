// main.cpp

#include <unordered_map>
#include <map>
#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
	map<int, string> students; // hash table

	//use bracket Notation for insertion

	students[0] = "Richert";
	students[1] = "Jane Doe";
	students[2] = "John Doe";
	students[251] = "Someone Else";

	cout << "students[0] = " << students[0] << endl;
	cout << "students[1] = " << students[1] << endl;
	cout << "students[251] = " << students[251] << endl;
	cout << "students[101] = " << students[101] << endl;

	//check if a student ID exists
	if (students.find(1) != students.end()) {
		// this was found
		cout << "found student id = 1" << endl;
	} else {
		cout << "student id not found for 1" <<endl;
	}

	cout << "---" << endl;
	for (map<int, string>::iterator i = students.begin();
		i != students.end(); i++) {
		cout << i->first << ": " << i->second << endl;
	}

	cout << "---" << endl;
	map<int, string>::iterator i = students.find(0);
	students.erase(i);

	students.erase(251);

	cout << "---" << endl;
	for (map<int, string>::iterator i = students.begin();
		i != students.end(); i++) {
		cout << i->first << ": " << i->second << endl;
	}

	students.insert(pair<int, string>(3, "sleepy"));
	students[3] = "awake";
	students.insert(pair<int,string>(3, "very Sleepy"));

	cout << "Students[3] = " << students[3] << endl;

	return 0;
}














































/*HashTable

Item <key (unique), value>

Hash Function 
	Some function that maps a unique key
	to a specific value (used for indexing 
	in the Hash Table)

ex:
	capacity = 100

	key % capacity
	key could be 1,101,201

Open-Address Addressing
	if collision, walk down the array until an open slot is
	found and add it there
	Problems: Delayed Insertion
			Looking for an empy place
			Clustering: When different keys are mapped to the same
			or nearby indices

Double Hashing
	helps avoid clustering by jumping more than one space
	Problem: could cause infinite loop by only accessing same elements in array
	Solution: make CAPACITY prime, but still inefficient

Chain Hashing
	Create a chain of all the elements that collide with one another
	all just references to memory 
	Vectors/LinkedLists Work well because of their dynamic memory
	allocation during runtime.
*/