#include <iostream>
using namespace std;

int main(void) {
	int X = 0;
	int result = 0;

	cin >> X;
	
	for (int i = 1; X > 0; i++) {
		int binary = X % 2;
		result += binary;
		X /= 2;
	}
	cout << result << endl;
}
