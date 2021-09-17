// 1 - Working with numbers declearing, casting, and using common math functions

#include <iostream>
// String Stream is to convert string into number
#include <sstream>
#include <cmath>

using namespace std;

// Customized var
// constant type var with auto keyword
#define PI 3.1415;
// define your favorate var type
typedef uint16_t let;
int main() {
	// ----- C++ number vars
	short a = 213;
	int b = 234;
	float c = 34.3443;
	double d = 23434.23;
	long e = 2343;
	const unsigned int f = 32434;
	// checkout var sizes
	cout << "SHORT: " << a << " SIZE: " << sizeof a << " byte(s) " << endl;
	cout << "INT: " << b << " SIZE: " << sizeof b << " byte(s) " << endl;
	cout << "FLOAT: " << c << " SIZE: " << sizeof c << " byte(s) " << endl;
	cout << "DOUBLE: " << d << " SIZE: " << sizeof d << " byte(s) " << endl;
	cout << "LONG: " << e << " SIZE: " << sizeof e << " byte(s) " << endl;
	// Customized vars and auto
	let myFav = 254;
	// auto can't be create without intial value
	auto autoNum = -2342342343234234234.34;
	auto pi = PI;
	// checkout var sizes
	cout << "PI: " << pi << " SIZE: " << sizeof(pi) << " byte(s) " << endl;
	cout << "LET: " << myFav << " SIZE: " << sizeof myFav << " byte(s) " << endl;
	cout << "AUTO: " << autoNum << " SIZE: " << sizeof autoNum << " byte(s) " << endl;

	// ----- Casting
	// C++ does not have 1 byte(8 bits) var holding a number but you use char char (unsinged 8 bit)
	// note even if you deftype uint8_t, it will be treated as a char so you have to cast it
	char letter = 'A';
	char smNum = 125;
	cout << "CHAR: " << letter << " SIZE: " << sizeof letter << " byte(s) " << endl;
	cout << "CHAR MAX: " << CHAR_MAX << " CHAR MIN: " << CHAR_MIN << endl;
	cout << "U8: " << smNum << endl;
	// with casting into an int
	cout << "U8: " << (int) smNum << endl;

	// Cast float into int
	cout << "FLOAT: " << c << " INTO INT: " << (int)c << endl;
	// cast string into int
	// include sstream
	string strNum = "213132";
	int fromStrNum;
	stringstream(strNum) >> fromStrNum;
	cout << "STRING NUM: " << strNum << " INT NUM+2: " << fromStrNum + 2 << endl;

	// Also stoi() but in C it is atoi() which in failure case does not throw an exception
	cout << "STR NUM: " << strNum << " INT + 2: " << stoi(strNum) + 2 << endl;
	string bStrNum = to_string(23343);
	cout << "INT To_string: " << bStrNum << endl;


	// Numeric Operations
	int num1 = 10;
	int num2 = 20;
	num1 += 5;
	num2 /= 2;
	num1++;
	num2--;
	int bigNum = (num1 > num2) ? num1 : num2;
	cout << "Big Num: " << bigNum << endl;

	// Math Operations
	// include cmath
	cout << "NUM: 3.553 - FLOOR: " << floor(3.55) << endl;
	cout << "NUM: 3.553 - ROUND: " << round(3.55) << endl;
	cout << "NUM: 3.553 - CEIL: " << ceil(3.55) << endl;
	cout << "2 to the power of 3 is " << pow(2, 3) << endl;
	cout << "16 to the squre root of 2 is " << sqrt(16) << endl;



	return 0;
}


// -------------------------------------------------------
// Primitive data type with pointers
#include <iostream>
using namespace std;

void log_num(float num) {
	cout << num << endl;
}

void mut_num(float* num) {
	*num = *num * 10;
}

int main() {
	float pi = 1.222;
	log_num(pi);
	mut_num(&pi);
	log_num(pi);
}

// -------------------------------------------------------
// How to delete a var
#include <iostream>
using namespace std;

int main() {
	// Delete an int var
	int num = 22;
	cout << num << endl;
	// delete + pointer to a variable
	delete &num;

	// This'll cause an error! // cause your have to allocate memory using new keyword first
	//cout << num << endl;

}

// -------------------------------------------------------
// How to get the type of a var
#include <iostream>
#include <typeinfo>
using namespace std;
int main() 
{
	const auto PI = 3.141527;
	cout << PI << endl;
	cout << sizeof(PI) << endl;
	cout << typeid(PI).name() << endl;
}