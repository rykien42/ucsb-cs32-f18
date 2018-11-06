// main.cpp

#include <iostream>
#include <string>
#include "tddFuncs.h"
#include "student.h"
#include "person.h"

using namespace std;

// int biggest(int a, int b, int c, int d) {
// 	if (a >= b && a >= c && a >= d) {
// 		return a;
// 	}
// 	if (b >= a && b >= c && b >= d) {
// 		return b;
// 	}
// 	if (c >= b && c >= a && c >= d) {
// 		return c;
// 	}
// 	if (d >= b && d >= c && d >= a) {
// 		return d;
// 	}
// 	return 0 ;
// }

// int isPositive(int a) {
// 	return (a >= 0);
// }

int main() {

	Person p("chris gaucho", 18);
	Student s("jaen doe", 20, 50119);

	cout << p.getName() << endl;
	cout << p.getAge() << endl;

	cout << s.getName() << endl;
	cout << s.getAge() << endl;
	cout << s.getPerm() << endl;

	// ASSERT_EQUALS(4, biggest(1,2,3,4));
	// ASSERT_EQUALS(4, biggest(1,2,4,3));
	// ASSERT_EQUALS(4, biggest(1,4,2,3));
	// ASSERT_EQUALS(4, biggest(4,1,2,3));

	// ASSERT_EQUALS(4, biggest(4,4,4,4));
	// ASSERT_EQUALS(-1, biggest(-1,-2,-3,-4));
	// ASSERT_EQUALS(0, biggest(-1,0,-3,-4));
	// ASSERT_EQUALS(4, biggest(1.1,2.3,3.5,4.1));

	// ASSERT_TRUE(isPositive(1));
	// ASSERT_TRUE(isPositive(2));
	// ASSERT_TRUE(isPositive(0));
	// ASSERT_TRUE(!isPositive(-1));

	return 0;
}