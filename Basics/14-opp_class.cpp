// Object-oriented Programming In C++
// Encapsulation is the use of private members which is the abstruction(hidding) of parts of an object which one won't need it as a user of a class

// Private members and Public member
// Getters and Setters
// this->
// Contstructor with 'CLASSNAME' and Destructor with '~CLASSNAME'


#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Person{
	// Unlink struct, default ones are private
	string pass = "default_pass";
public:
	string fName;
	string uName;
	bool matchPass(string inPass) {
		return pass == inPass;
	}
	bool changePass(string oldPass, string newPass) {
		if (oldPass == pass) {
			pass = newPass;
			return true;
		}
		return false;
	}
	Person(string fName, string uName) {
		this->fName = fName;
		this->uName = uName;
		cout << "Person constructed!\n";
	}
	~Person() {
		cout << "Person destructed!\n";
	}
};

int main()
{
	Person me("Ajmir Raziqi", "ajmir.ng@gmail.com");

	cout << "Name: " << me.fName << endl;
	cout << "Username: " << me.uName << endl;

	bool passChanged = me.changePass("default_pass", "254");
	cout << "Pass Changed: " << passChanged << endl;

	cout << "Pass Matched: " << me.matchPass("254") << endl;


}


