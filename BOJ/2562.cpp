#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int a1, a2, a3, a4, a5, a6, a7, a8, a9;
	int maxnum = 0;
	int th = 0;

	cin >> a1;
	cin >> a2;
	cin >> a3;
	cin >> a4;
	cin >> a5;
	cin >> a6;
	cin >> a7;
	cin >> a8;
	cin >> a9;

	int Arr[9] = { a1, a2, a3, a4, a5, a6, a7, a8, a9 };
	int Arr2[9] = { a1, a2, a3, a4, a5, a6, a7, a8, a9 };

	sort(Arr, Arr + 9);
	maxnum = Arr[8];

	for (int i = 0; i < 9; i++) {
		if (Arr2[i] == maxnum) {
			th = i+1;
			break;
		}
	}

	cout << maxnum << endl;
	cout << th << endl;
}
