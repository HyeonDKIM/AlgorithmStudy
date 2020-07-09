//#pragma warning (disable:4996)
#include <iostream>
using namespace std;
//1065번 한수

int HanNumber(int N) {
	int hun, ten, one;
	if (N < 100)
		return true;
	hun = N / 100;
	ten = N % 100 / 10;
	one = N % 10;
	if ((2*ten) == hun + one)
		return true;
	return false;
}

int main() {
	int N;
	cin >> N;
	int count = 0;

	for (int i = 1; i <= N; i++) {
		if (HanNumber(i))
			count++;
	}
	cout << count;
}
