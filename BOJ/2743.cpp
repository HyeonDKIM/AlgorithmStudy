#include <iostream>
#include <string>
using namespace std;

int main(void) {
	
	char c[100];
	int count = 0;

	for (int i = 0; i < 100; i++) {
		c[i] = NULL;
	}

	cin >> c;

	for (int i = 0; i < 100; i++) {
		if (c[i] != NULL) {
			count += 1;
		}
	}
	cout << count;
}
