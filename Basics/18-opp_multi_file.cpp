// --------------------------------------------------------
// header file = user.h
#ifndef USER
#define USER

#include <iostream>
using namespace std;
	
class User {
public:
	// Memeber Variables will stay in the header file
	std::string name;
	User(string name);
	string get_name();
	void set_name(string name);
};

#endif // !USER

// --------------------------------------------------------
// source file = user.cpp
#include <iostream>
#include "user.h"

// Function members will be in the linked cpp file prefixed with ClassName::Fun_NAME

User::User(string name) {
	this->name = name;
}

string User::get_name() {
	return this->name;
}

void User::set_name(string name) {
	this->name = name;
}


// --------------------------------------------------------
// main file = main.cpp
#include <iostream>
#include "user.h";

using namespace std;


int main()
{
	User a("Ali");
	cout << "This is " << a.get_name() << "." << endl;
}
