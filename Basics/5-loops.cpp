// Loops
#include <iostream>
#include <vector>
using namespace std;

typedef uint16_t let;

int main() {
	cout << "while loop" << endl;
	// while loop
	let counter = 0;
	let times = 5;
	while (counter <= times)
	{
		cout << counter << endl;
		counter++;
	}

	cout << "for loop" << endl;
	// for loop
	for (let i = 5; i > 0; i--)
	{
		cout << i << endl;
	}


	// do while loop
	string pass = "254";
	string guess;
	do
	{
		cout << "Guess the pass: ";
		cin >> guess;
	// make sure that the comparable vars are out do while loop
	} while (guess != pass);
	cout << "Good, The pass was " << pass << endl;

	// same code with while
	string passB = "123";
	string guessB;
	while (guessB != passB)
	{
		cout << "Guess the passB: ";
		cin >> guessB;
	}
	cout << "Good, The passB was " << passB << endl;


	// Break and continue
	// Break
	let num = 0;
	while (true)
	{
		if (num >= 10) {
			cout << "Loop broke!" << endl;
			break;
		}
		else {
			num++;
			cout << "NUM: " << num << endl;
		}
	}

	// continue
	let x = 0;
	while (true)
	{
		x++;
		cout << "Before" << endl;
		if (x < 5) continue;
		cout << "After" << endl;
		if (x == 10) break;
	}


	// Ranged based for loop (for arrays, t-arrays, and vectors)
	vector<int> nums = { 4, 5, 6, 7, 8, 9 };
	for (int num : nums) {
		cout << num << endl;
	}

}