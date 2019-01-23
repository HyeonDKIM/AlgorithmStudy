#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	int A[50];
	int B[50];
	int sum = 0;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	sort(A, A + N);
	sort(B, B + N);

	for (int i = 0; i < N; i++) {
		sum = sum + A[i] * B[N-1-i];
	}

	cout << sum << endl;

}
