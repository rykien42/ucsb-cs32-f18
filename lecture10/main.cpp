// main.cpp
#include <iostream>
#include <string>

using namespace std;

class NegativeValueException {};
class EvenValueException {};
class DivideByZeroException {};

double divide(int numerator, int denominator) {//throw (DivideByZeroException) {
	if (denominator ==0)
		throw DivideByZeroException();

	return numerator / denominator;
}
class A{};
class B: public A{};
class C{};

int main() {

	// try {
	// 	cout << divide(1,1) << endl;
	// 	cout << divide(1,0) << endl;
	// 	cout << divide(2,2) << endl;
	// } catch (DivideByZeroException) {
	// 	cerr << "ERROR: cannot divide by zero" << endl;
	// }

	int value;
	try {
		cout << "enter a positive and odd number: ";
		cin >> value;

		if (value < 0)
			throw B();
	} catch (C) {
		cout << "exception type C" << endl;
	} catch (B) {
		cout << "exception of type B" << endl;
	} catch (A) {
		cout << "exception of type A" << endl;
	}

	// 	if (value < 0)
	// 		throw NegativeValueException();

	// 	if (value % 2 == 0)
	// 		throw EvenValueException();

	// 	cout << "the number entered is: " << value << endl;
	// } catch (NegativeValueException e) {
	// 	cout << "the number entered is not positive" << endl;
	// } 
	// catch (EvenValueException e) {
	// 	cout << "the number entered is even" << endl;
	// }

	// cout << "stuff after try block" << endl;
}