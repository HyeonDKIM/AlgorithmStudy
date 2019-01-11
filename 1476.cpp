#include <iostream>
using namespace std;

//1476번 날짜 계산

int main() {
	int E, S, M;
	cin >> E >> S >> M;

	int result;
	int year = 1;
	while (1) {
		if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0) {
			result = year;
			break;
		}
		else
			year++;
	}
	cout << year << endl;
}
