// Threads and Sleep in CPP
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void do1(int id, int mSeconds) {
	while (1)
	{
		this_thread::sleep_for(chrono::milliseconds(500));
		this_thread::sleep_for(chrono::milliseconds(mSeconds));
		cout << "Thread: " << id << endl;
	}
}



int main() {
	int th1_id = 1;
	int th2_id = 2;

	thread th1(do1, th1_id, 100);
	//th1.join();

	thread th2(do1, th2_id, 1000);
	//th2.join();

	// this will hang the main thread not to exit
	cin.get();
}