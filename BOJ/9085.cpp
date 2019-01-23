#include <iostream>
#include <Windows.h>
using namespace std;

int main(void) {
	int T;
	int N;
	cin >> T;

	int arr[100];
	int sum = 0;
	for (int j = 0; j < T; j++) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
			sum = sum + arr[i];
		}
		cout << sum << endl;
		sum = 0;
	}

	system("pause");
}
