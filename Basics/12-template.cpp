// Template with typename keyword
// note: typename keyword is the same as class keyword
#include <iostream>
using namespace std;

template<typename T> void logThis(T data) {
	T str = data;
	cout << str << endl;
}

template<typename Any> Any addThis(Any x, Any y) {
	return x + y;
}

int main()
{
	int a = 2432;
	double b = 212134.234;
	string c = "DELL";
	
	// auto defined
	logThis(a);
	// manually defined
	logThis<double>(b);
	logThis(c);

	int result = addThis(2, 2);
	logThis(result);

	double aResult = addThis(23.232, 22.23);
	logThis(aResult);

}

// template with class keyword
// More about template
#include <iostream>
#include <vector>
using namespace std;
typedef unsigned short let;

template<class T, class U> T add(T& x, T& y) {
	U test = 22.22;
	bool is_float = is_floating_point_v<U>;
	cout << "is_float: " << is_float << endl;
	cout << "TEST: " << test << endl;
	return x + y;
}


int main()
{
	int a = 22;
	int b = 33;
	// The type of T must be clearfied here by the passed parameter or <int, float>, if not it'll throw an error
	int result = add<int, int>(a, b);
	cout << a << " + " << b << " = " << result << endl;

}


