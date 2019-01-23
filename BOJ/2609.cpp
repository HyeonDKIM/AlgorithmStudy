#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b > 0) {
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	cout << gcd(num1, num2) << endl;
	cout << lcm(num1, num2) << endl;
}
