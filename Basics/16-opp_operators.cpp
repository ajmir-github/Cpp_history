// Operator Overloading
// Note: operators only have access to the public members
#include <iostream>
using namespace std;

class Point {
public:
	int x = 0;
	int y = 0;
	// Math operators
	Point operator + (Point secondPoint) {
		Point newPoint( x + secondPoint.x , y + secondPoint.y);
		return newPoint;
	}
	Point operator * (Point secondPoint) {
		Point newPoint(x * secondPoint.x, y * secondPoint.y);
		return newPoint;
	}
	// Comparsion operators
	bool operator == (Point secondPoint) {
		return ( x == secondPoint.x ) and ( y == secondPoint.y );
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};
// << object
// the return is an instance of ostream and cout is also of the same type stream
ostream& operator << (ostream& output, Point point) {
	output << "( " << point.x << " " << point.y << " )" << endl;
	return output;
}

// >> object
// this get the stream and put it into the object
void operator >> (istream& input, Point& point) {
	input >> point.x >> point.y;
}

void printPoint(string, Point);

int main()
{
	Point pA(2, 3), pB(4, 5), pC(0, 0);
	pC = pA * pB;

	printPoint("Point A", pA);
	printPoint("Point B", pB);
	printPoint("Point C", pC);


	Point pointD(1, 1), pointE(1, 1);
	
	cout << "Point D: ";
	cin >> pointD;

	
	cout << pointE;
	cout << pointD;
	
	// Tenary with string stream
	cout << (pointD == pointE) ? "They are equal\n" : "They are not equal\n";
	// Tenary with function call
	//(pointD == pointE) ? cout << "They are equal\n" : cout << "They are not equal\n";


}

void printPoint(string tag, Point point) {
	cout << tag << ": ( " << point.x << " " << point.y << " )" << endl;
};


