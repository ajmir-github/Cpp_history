// Conditionals
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

typedef uint16_t let;
// create an enum with class (cap init)
enum class Session {
	spring, summer, fall, winter
};
// intiate now enum
//Session now = summer;
// also
Session now = Session::fall;

int main() {
	// if/else
	let num = 18;
	if (num > 17 && num < 100) {
		cout << "You are muture!" << endl;
	}
	else if (num < 18) {
		cout << "You are a child!" << endl;
	}
	else {
		cout << "You are already dead!" << endl;
	}

	// Ternary Operators Ex:2
	// Ex:1
	let numA = 100;
	let numB = 200;
	let numBig = (numA >= numB) ? numA : numB;
	cout << "Big num is: " << numBig << endl;

	// Ex:2
	bool canWork = false;
	canWork ? cout << "You can work!" : cout << "You can't work!";

	// switch with enum
	switch (now)
	{
	case Session::spring:
		cout << "Spring" << endl;
		break;
	case Session::summer:
		cout << "summer" << endl;
		break;
	case Session::fall:
		cout << "fall" << endl;
		break;
	case Session::winter:
		cout << "winter" << endl;
		break;
	default:
		cout << "Uknown" << endl;
		break;
	}

}