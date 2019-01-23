#include <iostream>
#include <Windows.h>
using namespace std;

int main(void) {
	int sum = 0;
	int A = 0;
	for (int i = 1; i <= 5; i++) {
		cin >> A;
		sum = sum + A;
	}
	cout << sum << endl;
	
	system("pause");
}
