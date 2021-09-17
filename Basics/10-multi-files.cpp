// -------------------------------------------------------
// filename = math_funs.cpp
int add(int a, int b) {
	return a + b;
}

double add(double a, double b) {
	return a + b;
}

// -------------------------------------------------------
// filename = math_funs.h
// if not defined if for avoid dublication of this module
// have the default function argument here
#ifndef MATH_FUNS
#define MATH_FUNS

int add(int a, int b = 1);

double add(double a, double b = 0.1);

#endif


// -------------------------------------------------------
// filename = source.cpp
#include <iostream>
#include "math_funs.h";
using namespace std;


int main() {
	int sNum = add(1, 2);
	cout << sNum << endl;

	double cNum = add(2.2222, 3.333);
	cout << cNum << endl;

}