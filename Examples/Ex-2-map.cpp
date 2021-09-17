// Map let you save key value pairs
#include <iostream>
#include <map>
using namespace std;


int main() {
	map<string, string> m({
			{"name", "Ajmir"},
			{"email", "ajmir.ng3@gmail.com"},
			{"age", "24"}
		});

	for (auto l : m) {
		cout << "KEY: " << l.first << " VALUE: " << l.second << endl;
	}
}