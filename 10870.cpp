#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[21];
	arr[0] = { 0 };
	arr[1] = { 1 };

	for (int i = 0; i < 19; i++) {
		arr[i + 2] = arr[i] + arr[i + 1];
	}

	int n;
	cin >> n;
	cout << arr[n] << endl;
}
