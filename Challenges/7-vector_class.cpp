#include <iostream>

using namespace std;

class Vec {
	int count_added = 0;
	int reserved_capacity;
	int* store;
public:
	void reserve(const int capacity) {
		this->reserved_capacity = capacity;
		this->store = new int[this->reserved_capacity];
	}
	int capacity() {
		return this->reserved_capacity;
	}
	int operator[] (int index) {
		return this->store[index];
	}
	int size() {
		return count_added;
	}
};
 
ostream& operator << (ostream& output, Vec vec) {
	output << "( ";
	int maxIndex = vec.size()-1;
	for (int index = 0; index <= maxIndex; index++)
	{
		if (maxIndex == index) {
			output << vec[index] << " ";
		}
		else
		{
			output << vec[index] << ", ";
		}
	}
	output << ")";
	return output;
}

int main() {
	Vec arr;
	// accessing arr elements
	/*cout << arr << endl;
	cout << arr[2] << endl;
	cout << arr.size() << endl;
	*/
	
	arr.reserve(10);
	cout << arr.capacity() << endl;



}