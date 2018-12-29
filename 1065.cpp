#include <iostream>
using namespace std;

//1065번 한수

int HanArr[1000];

int HanNumber(int N) {
	int hun, ten, one;
	if (N < 100)
		return N;
	else if (N < 1000) {
		hun = N / 100;
		ten = N % 100 / 10;
		one = N % 10;
		if ((2 * ten) == hun + one)
			return N;
	}
	else
		return 0;
}

int main() {
	int N;
	cin >> N;
	int count = 0;

	for (int i = 1; i <= N; i++) {
		HanArr[HanNumber(i)] = 1;
	}
	for (int i = 1; i <= N; i++) {
		if (HanArr[i] == 1) {
			count++;
		}
	}
	cout << count << endl;
}
