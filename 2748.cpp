#include <iostream>
using namespace std;

// 2748번 피보나치 수 2

int main() {

	long long FibArr[91];
	FibArr[0] = 0, FibArr[1] = 1;

	for (int i = 2; i < 91; i++) {
		FibArr[i] = FibArr[i - 1] + FibArr[i - 2];
	}

	int N;
	cin >> N;

	cout << FibArr[N] << endl;
}
