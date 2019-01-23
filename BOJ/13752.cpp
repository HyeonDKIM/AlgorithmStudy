#include <iostream>
#include <queue>
using namespace std;

//13752번 히스토그램

int main() {
	int n, k;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> k;
		for (int j = 0; j < k; j++)
			cout << '=';
		cout << endl;
	}
}