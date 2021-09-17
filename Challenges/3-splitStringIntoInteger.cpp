#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> splitStr(string & str) {
	char seperator = ' ';
	vector<int> vec;
	string temp;
	for (unsigned short index = 0; index < str.length(); index++)
	{
		if (str[index] != seperator) {
			temp += str[index];
		} else {
			vec.push_back(stoi(temp));
			temp = "";
		}
		if(str.length()-1 == index) vec.push_back(stoi(temp));
	}
	return vec;
}

int main() {
	cout << "Enter a set of numbers: ";
	string numbers = "22 44 6576 8778 3";
	getline(cin, numbers);

	vector<int> nums = splitStr(numbers);

	for (int num : nums) {
		cout << num+1 << endl;
	}
}