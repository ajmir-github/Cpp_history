// Function overloading And Default arguments
#include <iostream>
using namespace std;

void log_this(int val) {
	cout << " - int" << endl;
}

void log_this(double val) {
	cout << " - double" << endl;
}

void log_this(string val) {
	cout << " - string" << endl;
}

void muliply(int num, int times = 2) {
	cout << num * times << endl;
}

int main() {

	//log_this(22);
	//log_this(2.2);
	//log_this("sth");

	muliply(10, 1);

	//72%
}