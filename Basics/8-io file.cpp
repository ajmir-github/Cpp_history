// Output File Stream (ofstream objec from file stream(fstream))
//  Create, Overwrite and append a file
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
	string path = "log.txt";
	// Create and overwrite a file
	//ofstream file("log.txt");
	// Or
	// ofstream file;
	// file.open("log.txt");

	// Create and append a file
	ofstream file(path, ios::app);

	if (file.is_open()) cout << "File is opened!" << endl;

	vector<string> names = {"John", "Ali", "Smith", "Mich", "Scoot", "Nilo"};

	for (string name : names) file << name << endl;;


	cout << "File was written successfully!" << endl;
	file.close();



}


//-----------------------------------------------------------------
// input file stream object(ifstream) of file stream (fstream)
// Read a file WordByWord and LineByLine
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
enum class Read { IntByInt, CharByChar, WordByWord, LineByLine };
int main() {
	string path = "log.txt";
	ifstream file(path);
	Read readType = Read::LineByLine;
	if (file.is_open()) {
		int in;
		char ch;
		string word;
		string line;

		switch (readType)
		{
		case Read::IntByInt:
			while (file >> in) {
				cout << in << endl;
			};
			break;
		case Read::CharByChar:
			while (file >> ch) {
				cout << ch << endl;
			};
			break;
		case Read::WordByWord:
			while (file >> word) {
				cout << word << endl;
			};
			break;
		case Read::LineByLine:
			// for using getline, include <string>
			while (getline(file, line))
			{
				cout << line << endl;
			}
			break;
		default: cout << "Please choose a read type method for reading the file!" << endl;
			break;
		}
	}
	else
	{
		cout << "Couldn't open the file!" << endl;
	}



}


//-----------------------------------------------------------------
// Char-based Append
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	const string path = "log.txt";
	ofstream wfile(path, ios::app);
	if (wfile.is_open())
	{
		wfile.write("\nabcd", 2); // Char-based: enter and a will be appended
		cout << "File is written!" << endl;
	}
	wfile.close();
}


//-----------------------------------------------------------------
// Ex-2
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Student {
	unsigned int id;
	string name;
};

// Read and Write Binary files
int main() {
	// Fast Reading and writing
	// Effecient Use of Memory
	string path = "source";

	string names[3] = { "Ali", "Sami", "Esmat" };
	Student students[3];
	for (int ind = 0; ind < 3; ind++)
	{
		students[ind].id = ind + 1;
		students[ind].name = names[ind];
	}

	ofstream wFile(path, ios::out | ios::binary);
	if (wFile.is_open())
	{
		for (int i = 0; i < 3; i++)
		{
			wFile.write((char*) &students[i], sizeof(Student));
		}
		wFile.close();
		
		if (wFile.good())
		{
			cout << "Binary File was written successfully!" << endl;
		}
		else {
			cout << "Binary File was not written!" << endl;
		}
	}

	ifstream rFile(path, ios::in | ios::binary);
	if (rFile.is_open()) {
		Student read_student[3];
		for (int i = 0; i < 3; i++)
		{
			rFile.read((char*) &read_student[i], sizeof(Student));
		}

		for (short i = 0; i < 3; i++)
		{
			cout << read_student[i].name << endl;
		}

		rFile.close();

		if (rFile.good())
		{
			cout << "Binary File was read successfully!" << endl;
		}
		else {
			cout << "Binary File was not read!" << endl;
		}
	}
}
