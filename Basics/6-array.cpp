// Arrays
#include <iostream>
#include <cmath>
using namespace std;
typedef uint16_t let;

void printSize(int arr[], int size) {
	// Unlike C, C++ pass array ref by default so its pointer is 8byte
	// so to avoid this problem pass the size from scope where array has initated
	cout << "Memory From function Size: " << sizeof(arr) << " byte(s)" << endl;
	// int = 4bits so 4x5=20
	cout << "Memory Size: " << size << " byte(s)" << endl;
}

int main() {
	// Generate Random Number
	int lessThan = 10;
	int randNum;
	for (int i = 0; i <= 5; i++)
	{
		randNum = rand() % lessThan;
		cout << "Random Number: " << randNum << endl;
	}

	// Create an array
	int xNums[] = { 8, 7, 5, 4, 3 };
	int yNums[5] = { 6, 5, 3, 2, 1 };
	// get its size
	int sXNums = sizeof(xNums) / sizeof(xNums[0]);
	cout << "xNums Size: " << sXNums << endl;
	printSize(xNums, sizeof(xNums));
	// loop through all
	for (int i = 0; i < sXNums; i++)
	{
		cout << "(" << xNums[i] << ", " << yNums[i] << ")" << endl;
	}

	// Empty Array and Get ref
	int pNums[4];
	cout << "Array: " << pNums << endl;
	cout << "Empty Element: " << pNums[0] << endl;
	for (unsigned short i = 0; i < 4; i++)
	{
		cout << "INDEX: " << i << " ADDRESS: " << &pNums[i] << endl;
		pNums[i] = i * 3;
		cout << "VALUE: " << pNums[i] << endl;
	}

	// fill an array
	const unsigned short size = 3;
	string names[size];
	for (unsigned short i = 0; i < size; i++)
	{
		if (cin >> names[i]) {
			cout << "Had input" << endl;
		} else {
			break;
		}
	}
	for (unsigned short i = 0; i < size; i++)
	{
		cout << " - " << names[i] << endl;
	}
	

	// 2D Arrays
	int coordinate[2][2] = {
		{5, 7},
		{5, 9}
	};

	for (let x = 0; x < 2; x++)
	{
		for (let y = 0; y < 2; y++) {
			cout << "INDEX: (" << x << ", " << y << ")" << endl;
			cout << coordinate[x][y] << endl;
	
}




// ----------------------------------------------------------------------
// Array with pointers
#include <iostream>
using namespace std;

void log_array(int num[4]){
	cout << " - log_array" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << num[i] << endl;
	}
}

void mut_array(int num[4]) {
	cout << " - mut_array" << endl;
	for (int i = 0; i < 4; i++)
	{
		num[i] = num[i] * 10;
	}
}

int main() {
	// passing as paramenter
	// arrays ref are passed by default but with vector you must use & and *
	int nums[4] = { 4, 5, 6, 7 };
	
	log_array(nums);
	mut_array(nums);
	log_array(nums);


}




// ----------------------------------------------------------------------
// Templatized array
// simple template arrays are array plue some methods of vectors
// They are link vector but with fixed size, are passed by value, and remembers its size(unlink arrays)

#include <iostream>
#include <array>
using namespace std;

void log_array(array<int, 5> nums) {
	cout << "log_array" << endl;
	for (unsigned index = 0; index < nums.size(); index++)
	{
		cout << nums[index] << endl;
	}
}

void mut_array(array<int, 5>& nums) {
	cout << "mut_array" << endl;
	for (unsigned index = 0; index < nums.size(); index++)
	{
		nums[index] = nums[index] * 10;
	}
}

int main() {
	array<int, 5> nums = { 4, 5, 6, 7, 8 };

	// access tarr element
	cout << "Front: " << nums.front() << endl;
	cout << "Back: " << nums.back() << endl;
	cout << "At(x): " << nums.at(2) << endl;
	cout << "[x]: " << nums[2] << endl;

	log_array(nums);
	mut_array(nums);
	log_array(nums);

}
