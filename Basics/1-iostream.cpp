// iostream
#include <iostream>
#include <string>
using namespace std;

int main() {
	cerr << "Error, programmer failed to load previus data!" << endl;
	clog << "Please, re-enter your data." << endl;
	// get data from console
	// include string
	cout << "What is your name? ";
	// get a line
	string name;
	getline(cin, name);
	cout << "Hey " << name << endl;

	cout << "Enter Coordinate: ";
	// get a word
	string a, b, c;
	cin >> a >> b >> c;
	cout << "The coordinate is " << a << ", " << b << ", " << c << endl;

	return 0;
}