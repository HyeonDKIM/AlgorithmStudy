#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	int count = 0;

	int arr[101];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] == 1)
			count++;
	}
	if (count <= N / 2)
		cout << "Junhee is not cute!" << endl;
	else
		cout << "Junhee is cute!" << endl;
}
