// Static Class Members
// this initailazation of static const int and static int
// deconstruction using 'object.~className()'
#include <iostream>
using namespace std;

class User {
	// const can be init in the class
	static const int db_capacity = 100;
	// non-const must be initiated outside for having memory allocation
	static int db_count;
public:
	static int get_db_capacity() {
		return db_capacity;
	}
	static int get_db_count() {
		return db_count;
	}
	static void set_db_count(int number) {
		db_count = number;
	}
	User() {
		db_count++;
		cout << "User constructed!\n";
	}
	~User() {
		db_count--;
		cout << "User destructed!\n";
	}
};
// Class has no memory to remember so you must allocate memory for it by ClassName::MemeberName = Value
int User::db_count = 0;

int main()
{

	User a;
	User b;
	User c;

	b.~User();
	c.~User();

	// User::set_db_count(User::get_db_count() + 50);

	cout << User::get_db_capacity() << endl;
	cout << User::get_db_count() << endl;

}


