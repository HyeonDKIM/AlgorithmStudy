#include <iostream>
using namespace std;

int main(void) {

	int PC[100];
	int GuestNumarr[100];
	int GuestNum;
	int refuse = 0;

	cin >> GuestNum;

	for (int i = 1; i <= GuestNum; i++) {
		cin >> GuestNumarr[i];
	}

	for (int i = 0; i <= 100; i++) {
		PC[i] = 0;
	}

	for (int i = 1; i <= GuestNum; i++){
		for (int j = 1; j <= 100; j++) {
			if (j == GuestNumarr[i]) {
				if (PC[j] != 0)
					refuse = refuse + 1;
				else if (PC[j] == 0)
					PC[j] = GuestNumarr[i];
			}
		}
	}
	cout << refuse;
}
