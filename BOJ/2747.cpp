#include <iostream>
using namespace std;

// 2747번 피보나치 수

int main() {
	
	int Fib = 0;

	int FibArr[46];
	FibArr[0] = 0, FibArr[1] = 1;

	for (int i = 2; i < 46; i++) {
		FibArr[i] = FibArr[i - 1] + FibArr[i - 2];
	}

	int N;
	cin >> N;

	cout << FibArr[N] << endl;
}
