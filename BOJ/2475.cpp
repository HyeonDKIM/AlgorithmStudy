#include <iostream>
using namespace std;

int main(void) {

	int n1, n2, n3, n4, n5;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;

	n1 = n1 * n1;
	n2 = n2 * n2;
	n3 = n3 * n3;
	n4 = n4 * n4;
	n5 = n5 * n5;

	int sum = 0;
	sum = n1 + n2 + n3 + n4 + n5;

	int num = 0;
	num = sum % 10;

	cout << num;
	
}
