#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	
	int A[10];
	int T;
	int PrintNum[1000];

	cin >> T;
	for (int j = 0; j < T; j++) {

		for (int i = 0; i < 10; i++) {
			cin >> A[i];
		}
		sort(A, A + 10);
		PrintNum[j] = A[7];
	}
	for (int i = 0; i < T; i++) {
		cout << PrintNum[i] << endl;
	}
}
