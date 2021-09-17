// How To Get Type of A variable
#include <iostream>
#include <typeinfo>
using namespace std;

template<typename Any> void print(Any stream) {
	cout << typeid(stream).name() << endl;
	cout << stream << endl;
}

template<typename A, typename B> bool typeCompare(A a, B b) {
	return typeid(a) == typeid(b);
}

int main() {

	print(11);
	print("Hello Ajmir");

	int a = 1, d = 2;
	float b = 2.2;
	cout << "Same Type: " << typeCompare(a, b) << endl;
	cout << "Same Type: " << typeCompare(a, d) << endl;

}