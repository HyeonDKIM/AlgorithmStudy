#include <iostream>
using namespace std;

int main(void) {

	int Pay;
	cin >> Pay;

	int change = 1000 - Pay;
	int count = 0;

	if (change % 500 != 0) {
		count += change / 500;
		change = change % 500;
	}
	else {
		count += change / 500;
		change = 0;
	}

	if (change % 100 != 0) {
		count += change / 100;
		change = change % 100;
	}
	else {
		count += change / 100;
		change = 0;
	}

	if (change % 50 != 0) {
		count += change / 50;
		change = change % 50;
	}
	else {
		count += change / 50;
		change = 0;
	}

	if (change % 10 != 0) {
		count += change / 10;
		change = change % 10;
	}
	else {
		count += change / 10;
		change = 0;
	}

	if (change % 5 != 0) {
		count += change / 5 + (change % 5);
	}
	else {
		count += change / 5;
		change = 0;
	}

	cout << count << endl;
}
