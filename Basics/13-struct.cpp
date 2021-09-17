#include <iostream>
using namespace std;

struct Person
{
	string fName;
	string uName;
	bool matchPass(string inPass) {
		return pass == inPass;
	}
	bool changePass(string oldPass, string newPass) {
		if (oldPass == pass) {
			pass = newPass;
			return true;
		}
		else {
			return false;
		}
	}
private:
	string pass = "default_pass";
};
int main()
{
	Person me;
	me.fName = "Ajmir Raziqi";
	me.uName = "ajmir.ng@gmail.com";
	
	cout << "Name: " << me.fName << endl;
	cout << "Username: " << me.uName << endl;

	bool passChanged = me.changePass("default_pass", "254");
	cout << "Pass Changed: " << passChanged << endl;

	cout << "Pass Matched: " << me.matchPass("254") << endl;



}

