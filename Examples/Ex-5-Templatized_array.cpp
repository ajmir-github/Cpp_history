#include <iostream>
#include <vector>
using namespace std;

// Templatized Class
template<class Any> class List {
public:
	vector<Any> storage;
	unsigned int count = 0;
	void push(Any data) {
		storage.push_back(data);
		count++;
	};
	Any get(unsigned int index) {
		return (count > index) ? storage[index] : NULL;
	};
};

int main() {
	List<int> a;
	
	a.push(3);
	a.push(7);
	a.push(4);

	cout << a.get(0) << endl;
	cout << a.get(1) << endl;
	cout << a.get(2) << endl;
	cout << a.get(3) << endl;


}