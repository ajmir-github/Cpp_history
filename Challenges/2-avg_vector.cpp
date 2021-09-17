// Get the avarage number of a vector
#include <iostream>
#include <vector>
using namespace std;
template<class Tvec, class Tout> void vectorAvg(Tvec& vec, Tout& out) {
	unsigned short length = vec.size();
	out = 0;
	for (unsigned short index = 0; index < length; index++)
	{
		out = out + vec[index];
	}
	out /= length;
}

int main()
{
	vector<int> nums{ 1, 2, 3, 4, 5 };
	int avg;
	vectorAvg(nums, avg);

	cout << avg << endl;
}


