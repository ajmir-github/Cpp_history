// Using Friend Function
#include <iostream>
#include <string>
using namespace std;

class User {
	string status = "unknown";
public:
	string name = "unknown";
	// Enable outer function to access inner data of this class
	friend void get_status(User user);
};

void get_status(User user) {
	cout << "Name: " << user.name << endl; // Public
	cout << "Status: " << user.status << endl; // Private only for friend function
}

int main() {
	User u;
	u.name = "Ali";

	// It is called as standalone function, Not as a memeber
	get_status(u);
}

//------------------------------------
// Using Friend Operator Function
#include <iostream>
#include <string>
using namespace std;

class User {
	string status = "unknown";
public:
	string name = "unknown";
	// Enables operator << function to access private data of this class
	friend ostream& operator << (ostream& output, User user);
	//  Also
	//friend ostream& operator << (ostream&, User);



};

ostream& operator << (ostream& output, User user) {
	output << "Name: " << user.name << '\t' << "Status: " << user.status << endl;
	return output;
}


int main() {
	User u;
	u.name = "Ali";
	cout << u;
}