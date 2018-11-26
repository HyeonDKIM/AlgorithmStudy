#include <iostream>
#include <Windows.h>
using namespace std;

int main(void) {
	int X;
	cin >> X;

	int num = 0;
	int distinction;

	for (int i = 1; i <= X; i++) {
		distinction = i * (i + 1) / 2;
		if (distinction >= X) {
			num = i;
			break;
		}
		else
			continue;
	}
	
	int numerator;
	int denominator;

	if (num % 2 == 0) {
		numerator = num - (distinction - X);
		denominator = distinction - X + 1;
	}
	if (num % 2 == 1) {
		denominator = num - (distinction - X);
		numerator = distinction - X + 1;
	}

	cout << numerator << "/" << denominator << endl;

	system("pause");
}
