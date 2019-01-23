#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int CycleNum = 0;
	int count = 0;
	CycleNum = N;

	while (CycleNum !=100) {
		if (CycleNum < 10) {
			CycleNum = CycleNum * 10 + CycleNum;
			count += 1;
		}

		else {
			CycleNum = (CycleNum % 10)*10 + (CycleNum / 10 + CycleNum % 10) % 10;
			count += 1;
		}

		if (CycleNum == N)
			break;
	}
	cout << count << endl;
}
