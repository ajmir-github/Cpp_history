// Strings
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// string declearation with intial value
	string fname = "Ajmir";
	string lname = "Raziqi";
	// string concat
	string fullname = fname + " " + lname;
	unsigned short age = 24;
	// convert into a string
	string status = "He is " + to_string(age);
	status += ".";
	cout << "Full name: " << fullname << endl;
	cout << "Status: " << status << endl;
	// string length and capacity
	unsigned short sLength = fullname.size();
	cout << "Length: " << sLength << endl;
	// access string chars
	for (unsigned short i = 0; i < sLength; i++) {
		cout << "Index: " << i << " - Value: " << fullname[i] << endl;
	}

	// String modifiers
	// append
	string greeting = "Hello";
	greeting.append("there");
	greeting += "!";
	greeting.push_back('='); // one char at a time
	// insert
	greeting.insert(5, ".., ");
	// erase
	greeting.erase(5, 2);
	greeting.pop_back(); // erase the last char
	// replace
	greeting.replace(0, 5, "Salaam");
	cout << greeting << endl;

	// String operations
	// find
	cout << "there found at: index " << greeting.find("there") << endl;
	// substr
	cout << "Some part of greeting is " << greeting.substr(0, 4) << endl;
	// find_first_of and find_last_of
	cout << "First found at: index " << greeting.find_first_of("aeiou") << endl;
	cout << "Last found at: index " << greeting.find_last_of("aeiou") << endl;
	// if not found, returns -1

	// Reserve and Capacity
	string str;
	// default is 15 chars
	str.reserve(50);
	str += "We are all happy with out dear families.";
	// observe
	cout << "Value: " << str << endl;
	cout << "Size: " << str.size() << " char(s)" << endl;
	cout << "Capacity: " << str.capacity() << " char(s)" << endl;

	return 0;
}

// -------------------------------------------------------
// String with pointers
#include <iostream>
using namespace std;


void log_string(string str) {
	cout << " - log_string" << endl;
	cout << "Length: " << str.length() << endl;
	cout << "Value: " << str << endl;
}
// ex - 1
void mut_string(string* str) {
	cout << " - mut_string" << endl;
	*str = "John";
}
// ex - 2
void mut_string(string & str) {
	cout << " - mut_string" << endl;
	str = "Smith";
}
int main() {
	string name = "Ali";

	log_string(name);
	mut_string(&name);
	log_string(name);
	// also with ex - 2s
	mut_string(name);
	log_string(name);


}
