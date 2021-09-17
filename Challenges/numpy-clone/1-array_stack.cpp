// Vector vStack and hStack like Numpy
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<uint16_t>> Mat;
typedef unsigned short let;


void ShowMat(Mat& mat) {
	cout << "---------\n";
	for (let row = 0; row < mat.size(); row++)
	{
		for (let col = 0; col < mat[row].size(); col++)
		{
			cout << mat[row][col] << " ";
		}
		cout << "\n";
	}
	cout << "---------\n";
}

void showSize(Mat& mat) {
	cout << "ROW: " << mat.size() << "\tCOL: " << mat[0].size() << endl;
}

void vStack(Mat& inMatrixA, Mat& inMatrixB, Mat& OutMatrix){
	for (let row = 0; row < inMatrixA.size(); row++)
	{
		OutMatrix.push_back(inMatrixA[row]);
	}
	for (let row = 0; row < inMatrixB.size(); row++)
	{
		OutMatrix.push_back(inMatrixB[row]);
	}
}

void hStack(Mat& inMatrixA, Mat& inMatrixB, Mat& OutMatrix) {
	for (let row = 0; row < inMatrixA.size(); row++)
	{
		OutMatrix.push_back(inMatrixA[row]);
	}
	for (let row = 0; row < inMatrixB.size(); row++)
	{
		for (let col = 0; col < inMatrixB[row].size(); col++)
		{
			OutMatrix[row].push_back(inMatrixB[row][col]);
		}
	}
}


int main() {
	Mat matA{
		{0, 1, 0, 1, 0},
		{0, 1, 0, 1, 0},
		{0, 0, 1, 0, 0}
	};
	ShowMat(matA);

	Mat matB{
		{0, 1, 0, 1, 0},
		{0, 1, 0, 1, 0},
		{0, 0, 1, 0, 0}
	};
	ShowMat(matB);
	
	Mat matJoinV, matJoinH;
	vStack(matA, matB, matJoinV);
	hStack(matA, matB, matJoinH);

	ShowMat(matJoinV);
	ShowMat(matJoinH);
}