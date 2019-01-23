#include <iostream>
#include <Windows.h>
using namespace std;

int main(void) {
	int H, M;
	cin >> H >> M;
	
	int minute = 0;
	minute = M - 45;

	if (minute < 0) {
		H = H - 1;
		minute = M + 60 - 45;
	}

	if (H < 0) {
		H = H + 24;
	}

	cout << H << " " << minute;

	system("pause");
}
