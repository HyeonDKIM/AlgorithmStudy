#include <iostream>
using namespace std;

int main(void) {
	int N, M;
	cin >> N >> M;

	int count = 0;
	int tempcount = 0;

	if (N != 1) {
		tempcount = tempcount + (N - 1);
		count = N*(M - 1)+tempcount;
	}
	if (N == 1) {
		count = N*(M - 1);
	}
	cout << count;
}
