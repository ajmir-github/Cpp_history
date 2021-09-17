// Master Singly Link list, Pointer, OPP

#include <iostream>
#include <string>

using namespace std;


template <class let> class SinglyList {
private:
	struct Node {
		let data;
		Node* next;
	};
	Node* head, * tail;
	unsigned short size = 0;
public:
	SinglyList() {
		// By NULL, avoid random memory location
		head = NULL;
		tail = NULL;
	}
	void append(let value) {
		// Push back an element into the list
		Node* temp = new Node;
		temp->data = value;
		temp->next = NULL;
		if (head == NULL) {
			// if list empty
			head = temp;
			tail = temp;
		} else {
			// if list not empty
			tail->next = temp;
			tail = temp;
		}
		temp = NULL;
		size++;
	}
	void prepend(let value) {
		Node* temp = new Node;
		temp->data = value;
		temp->next = head;
		head = temp;
		size++;
	}
	void insert(unsigned short positon, let value) {
		if (positon == 0) return this->prepend(value);
		if (positon == size) return this->append(value);
		Node* temp = new Node;
		temp->data = value;

		Node* prev = new Node;
		Node* curr = new Node;
		prev = head;
		curr = head->next;
		for (unsigned short i = 1; i < size; i++)
		{
			if (i == positon) {
				prev->next = temp;
				temp->next = curr;
			}
			else {
				prev = curr;
				curr = curr->next;
			}
		}
		//temp = NULL;
	}
	unsigned short length() {
		return size;
	}
	let operator [] (unsigned short index) {
		// Making sure that valid index has entered
		if (index < 0 || index >= size) return NULL; 
		Node* temp = new Node;
		temp = head;
		unsigned short currentIndex = 0;
		// Loop to find the entered index
		while (temp != NULL)
		{
			if (index == currentIndex) {
				return temp->data;
			} else {
				temp = temp->next;
				currentIndex++;
			}
		}
	}

	string join() {
		string joined;
		Node* temp = new Node;
		temp = head;
		for (unsigned short i = 0; i < size; i++)
		{
			joined += to_string(temp->data);
			temp = temp->next;
		}
		return joined;
	}
	string join(char sep) {
		string joined;
		Node* temp = new Node;
		temp = head;
		for (unsigned short i = 0; i < size; i++)
		{
			joined += to_string(temp->data);
			if (i != size - 1) joined += sep;
			temp = temp->next;
		}
		return joined;
	}
	void display() {
		// test function
		Node* temp = new Node;
		temp = head;
		cout << "[ ";
		while (temp != NULL)
		{
			cout << temp->data << ' ';
			temp = temp->next;
		}
		cout << "]" << endl;
		cout << endl;
	}

};

int main() {
	SinglyList<int> a;
	a.append(222);
	a.append(333);
	a.append(555);

	a.prepend(111);
	a.insert(3, 444);

	a.display();
	cout << "JOINED: " << a.join('_') << endl;
}