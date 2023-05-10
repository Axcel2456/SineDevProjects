#include <iostream>

#define NAME "JAMES"
#define PASSWORD "HELLO"

using namespace std;

bool checkName();
bool checkPassword();

int main() {

	cout << "Please Log In to Continue!!\n";
	if (checkName()) {
		if (checkPassword()) {
			cout << "Log in Succesful\n";
		}
	}
}

bool checkName() {
	string input;
	cout << "Please enter correct user name\n";
	cin >> input;
	if (input == NAME) {
		cout << "Correct Username\n";
		return true;
	}
	if (input != NAME) {
		cout << "Incorrect Username\n";
		cout << "Try again or exit : Y/n";
		cin >> input;
		if (input == "Y") {
			checkName();
		}
		else if (input == "n") {
			exit(EXIT_SUCCESS);
		}
		else {
			exit(EXIT_SUCCESS);
		}
	}
}

bool checkPassword() {
	string input;
	cout << "Please enter correct password\n";
	cin >> input;
	if (input == PASSWORD) {
		cout << "Correct Password\n";
		return true;
	}
	if (input != PASSWORD) {
		cout << "Incorrect Password\n";
		cout << "Try again or exit : Y/n";
		cin >> input;
		if (input == "Y") {
			checkPassword();
		}
		else if (input == "n") {
			exit(EXIT_SUCCESS);
		}
		else {
			exit(EXIT_SUCCESS);
		}
	}
}