// CLI in C++
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Number of argument(s): " << argc << endl;
	string path = argv[0];
	string command = argv[1];

	cout << "Path: " << path << endl;
	cout << "Command: " << command << endl;
}