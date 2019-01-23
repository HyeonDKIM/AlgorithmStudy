#include <iostream>
using namespace std;

int main(void) {
	
	int N;

	cin >> N;
	int Num[100];

	int Count = 0;
	bool WTF = false;
	
	for (int i = 0; i < N; i++) {
		cin >> Num[i];
	}

	for (int i = 0; i < N; i++) {
		WTF = false;
		if (Num[i] != 1) {
			for (int j = 2; j < Num[i]; j++) {
				if ((Num[i] % j) == 0) {
					WTF = false;
					break;
				}
				else
					WTF = true;
			}
			if (Num[i] == 2) {
				WTF = true;
			}
			if (WTF == true) {
				Count = Count + 1;
			}
		}
	}
	cout << Count;
}
