// Inheritence
#include <iostream>
using namespace std;
class Person {
public:
	string name;
	Person() {
		cout << "Person created\n";
	}
};

class User: public Person {
public:
	string username;
	User() {
		cout << "User created\n";
	}
	void get_summary() {
		cout << "Name: " << this->name << " Username: " << this->username << endl;
	}
};

int main()
{
	User a;
	a.name = "Ali";
	a.username = "Sami";
	a.get_summary();
}
