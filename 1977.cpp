#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

	int M, N;
	cin >> M;
	cin >> N;

	int arr[100];
	int Sum = 0;
	int PerfectSquare = 0;
	int minNum = 10000;

	for (int i = 1; i*i <= N; i++) {
		if (i*i >= M) {
			arr[i] = i * i;
			minNum = min(minNum, i*i);
			Sum = Sum + (i*i);
			PerfectSquare = 1;
		}
	}
	sort(arr, arr + 100);

	if (PerfectSquare == 0)
		cout << -1;
	if (PerfectSquare == 1) {
		cout << Sum << endl;
		cout << minNum << endl;
	}
}
