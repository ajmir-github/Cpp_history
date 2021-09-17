// main.cpp
#include <iostream>
#include "funs.h";

using namespace std;

namespace Node
{
	void show() {
		cout << "I am a node." << endl;
	}
}

int main()
{
	funs::showMessage();
	Node::show();
}

// funs.h
#ifndef FUNS

namespace funs
{
	void showMessage();
}

#endif


// funs.cpp
#include <iostream>

using namespace std;

namespace funs
{
	void showMessage() {
		cout << "Hello welcome to the rebust world of C++!" << endl;
	}
}

