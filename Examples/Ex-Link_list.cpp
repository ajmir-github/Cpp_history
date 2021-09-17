#include <iostream>
#include <string>
using namespace std;

template<class AnyType> class LinkedList {
	struct Node {
		AnyType data;
		Node* next;
	};
	Node* head = NULL; // Ref to the first element
	Node* tail = NULL; // Ref to the last element
	uint32_t length = 0; // remeber the length
public:
	// Add data
	void append(AnyType data){
		Node* newNode = new Node;
		newNode->data = data;
		newNode->next = NULL;
		if (length == 0) {
			newNode->next = NULL;
			this->head = newNode;
			this->tail = newNode;
		} else {
			Node* cursor = this->head;
			for (uint32_t i = 0; i < this->length; i++)
			{
				if (i == (this->length-1)){
					cursor->next = newNode;
				} else {
					cursor = cursor->next;
				}
			}
			tail = newNode;
		}
		length++;
	}
	
	void prepend(AnyType data) {
		Node* newNode = new Node;
		newNode->data = data;
		newNode->next = NULL;
		if (length == 0) {
			newNode->next = NULL;
			this->head = newNode;
			this->tail = newNode;
		}
		else {
			newNode->next = this->head;
			head = newNode;
		}
		length++;
	}

	void insert(uint32_t index, AnyType data) {
		Node* newNode = new Node;
		newNode->data = data;
		newNode->next = NULL;
		if (index == 0) {
			this->prepend(data); // if index min

		} else if(index == this->length) {
			this->append(data); // if index max

		} else if (index != this->length) {
			Node* cursor = this->head; // if index med
			for (uint32_t i = 0; i < this->length; i++)
			{
				if (i == index-1) {
					newNode->next = cursor->next;
					cursor->next = newNode;
					break;
				}
				else {
					cursor = cursor->next;
				}
			}
		}
		length++;
	}
	// Get data

	AnyType operator[] (uint32_t index) {
		if (this->length <= index)
			return NULL;
		Node* cursor = this->head;
		for (uint32_t i = 0; i < this->length; i++)
		{
			if (i == index) {
				return cursor->data;
			}
			else {
				cursor = cursor->next;
			}
		}
	}

	AnyType first() {
		return this->head->data;
	}
	AnyType last() {
		return this->tail->data;
	}
	uint32_t size() {
		return this->length;
	}
	void test() {
		Node* cursor = this->head;
		for (uint32_t i = 0; i < this->length; i++)
		{
			cout << cursor->data << ' ';
			cursor = cursor->next;
		}
		cout << endl;
	}
	// Edit data
	void edit(uint32_t index, AnyType data) {
		if (this->length > index) {
			Node* cursor = this->head;
			for (uint32_t i = 0; i < this->length; i++)
			{
				if (i == index) {
					cursor->data = data;
				}
				else {
					cursor = cursor->next;
				}
			}
		}
	}
	void empty() {
		Node* cursor = this->head;
		Node* select = NULL;
		for (uint32_t i = 0; i < this->length; i++)
		{
			select = cursor;
			cursor = cursor->next;
			delete select;
		}
		this->head = NULL;
		this->tail = NULL;
		this->length = 0;
	}
	void removeFirst() {
		Node* prevHead = this->head;
		Node* newHead = prevHead->next;
		delete prevHead;
		this->head = newHead;
		this->length--;
	}
	void removeLast() {
		Node* cursor = this->head;
		for (uint32_t i = 0; i < this->length; i++)
		{
			if (i == this->length - 2) {
				delete cursor->next;
				cursor->next = NULL;
			}
			else {
				cursor = cursor->next;
			}
		}
		this->length--;
	}
	void remove(uint32_t index) {
		if (index == 0) { // first element
			this->removeFirst();

		} else if (index == this->length - 1) { // last element
			this->removeLast();

		} else { // med element
			Node* cursor = this->head;
			Node* prevElement = NULL;
			
			for (uint32_t i = 0; i < this->length; i++) {
				if (i == index-1) {
					prevElement = cursor;
					cursor = cursor->next;
					prevElement->next = cursor->next;
					delete cursor;
					break;
				}
				cursor = cursor->next;
			}
			this->length--;
		}
	}
};

int main() {
	LinkedList<string> a;
	a.append("Ajmir");
	a.append("Ali");
	a.append("Sami");
	a.append("Esmat");

	a.remove(1);

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}

};