// Vectors
#include <iostream>
#include <vector>
using namespace std;
typedef uint16_t let;

void print_vector(vector<let> data) {
	for (let i = 0; i < data.size; i++)
	{
		cout << data[i] << endl;
	}
}
int main() {
	// Create and modify a vector
	vector<let> nums;
	nums.reserve(10);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	nums.shrink_to_fit();
	nums.pop_back();
	// access its properties
	let size = nums.size();
	let capacity = nums.capacity();
	let max = nums.max_size();
	cout << "Size: " << size << " Capacity: " << capacity << " Max:" << max << endl;
	for (let i = 0; i < size; i++)
	{
		cout << "I: " << i << " V: " << nums[i] << endl;
	}
	// access vec element
	cout << "Front: " << nums.front() << endl;
	cout << "Back: " << nums.back() << endl;
	cout << "At(x): " << nums.at(2) << endl;
	cout << "[x]: " << nums[2] << endl;

	// pass vector into a function
	print_vector(nums);
}

// ------------------------------------------------------------------------

// Vectors with pointers
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void logVec(vector<int> nums) {
	cout << "---logVec" << endl;
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << endl;
	}
}

void sqrtVec(vector<int> & nums) {
	cout << "---sqrtVec" << endl;
	for (int i = 0; i < nums.size(); i++)
	{
		nums[i] = pow(nums[i], 2);
	}
}

int main() {
	// passing as paramenter and pointer with vectors
	vector<int> nums = { 3, 4, 5, 6, 7, 8 };
	logVec(nums);
	sqrtVec(nums);
	logVec(nums);

}


// --------------------------------------------------------------
// Nested Vectors
#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<vector<int>> coordinates = {
		{1, 2, 3},
		{2, 3, 4},
		{3, 4, 5}
	};
	int rowSize = coordinates.size();
	int colSize = coordinates[0].size();
	for (int i = 0; i < rowSize; i++) {
		for (int x = 0; x < colSize; x++) {
			cout << coordinates[i][x] << '\t';
		}
		cout << '\n';
	}
}