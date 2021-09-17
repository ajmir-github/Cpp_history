// sort a vector
#include <iostream>
#include <vector>
using namespace std;
typedef unsigned short let;

void printVec(vector<int>& vec) {
	for (let index = 0; index < vec.size(); index++)
	{
		cout << vec[index] << '\t';
	}
	cout << '\n';
}
void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = a;
}

void sortVec(vector<int>& vec) {
	let length = vec.size();
	int temp;
	for (let from = 0; from < length; from++)
	{
		for (let ind = from; ind < length; ind++)
		{	
			if (vec[from] > vec[ind]) {
				temp = vec[from];
				vec[from] = vec[ind];
				vec[ind] = temp;
			}
		}
	}

}

int main()
{
	vector<int> nums = { 9, 8, 7, 7, 4, 3, 2, 5, 1, 6, 1 };
	printVec(nums);
	sortVec(nums);
	printVec(nums);


}


