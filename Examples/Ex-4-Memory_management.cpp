// New and Delete Keywords
#include <iostream>
using namespace std;

template<typename Any> Any* re_allocte(Any size) {
	// This is to allocate memory to a new pointer
	Any* pointer = NULL;
	pointer = new Any[size];
	return pointer;
}

int main() {
	cout << "\n --- New and Delete Keywords with int (stack)" << endl;
	// To have manual allocation do init memory address
	int* ptrInt = NULL;
	// alocate the memory
	ptrInt = new int(1);
	cout << "VAL: " << *ptrInt << "\tREF: " << ptrInt << endl;
	// free the memory
	delete ptrInt;
	// re-alocate the memory
	ptrInt = new int(22);
	cout << "VAL: " << *ptrInt << "\tREF: " << ptrInt << endl;


	cout << "\n --- New and Delete Keywords with arrays (heap)" << endl;
	int* ptrArr = NULL;
	// allocate the memory
	ptrArr = new int[5];
	for (int i = 0; i < 5; i++) ptrArr[i] = i * 2;
	for (int i = 0; i < 5; i++) cout << "IND: " << i <<"\tREF: " << &ptrArr[i] << "\tVAL: " << ptrArr[i] << endl;


	// free the memory
	delete[] ptrArr;
	cout << "\n --- re-allocate the memory" << endl;
	ptrArr = re_allocte<int>(8);
	// re-allocate the memory
	for (int i = 0; i < 8; i++) ptrArr[i] = i + 2;
	for (int i = 0; i < 8; i++) cout << "IND: " << i << "\tREF: " << &ptrArr[i] << "\tVAL: " << ptrArr[i] << endl;
}