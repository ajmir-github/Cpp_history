// Polymorphism
#include <iostream>
using namespace std;

class Person {
public:
	// virtual means this can be overwritten by a child class
	//virtual void type();
	void type();
};

// Note: you can only define a member function outside if it's decleared in inside
void Person::type() {
	cout << "This is Person type\n";
}

class User: public Person {
public:
	void type();
};

void User::type() {
	cout << "This is User type\n";
}

int main()
{
	User a;
	a.type();

	Person& p = a;
	p.type();
}
