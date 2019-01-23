#include <iostream>
using namespace std;

int arr[10001];

int d(int n) {
	int result = n;

	if (n < 10)
		result = n + n;
	else if (n < 100)
		result = n / 10 + n % 10 + n;
	else if(n < 1000)
		result = n / 100 + n % 100 / 10 + n % 10 + n;
	else if (n < 10000)
		result = n / 1000 + n % 1000 / 100 + n % 100 / 10 + n % 10 + n;

	return result;
}

int main() {

	for (int i = 1; i <= 10000; i++) {
		arr[d(i)] = 1;
		if (arr[i] != 1)
			cout << i << endl;
	}
}
