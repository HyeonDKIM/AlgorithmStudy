#include <iostream>
using namespace std;

int main(void) {

	int A = 0;
	int B = 0;
	int C = 0;

	cin >> A >> B;
	cin >> C;

	int Time_Hour = 0;
	int Time_Minute = 0;

	Time_Hour = C / 60;
	Time_Minute = C % 60;

	A = A + Time_Hour;
	B = B + Time_Minute;

	if (B >= 60) {
		B = B - 60;
		A = A + 1;
	}

	if (A >= 24) {
		A = A - 24;
	}
	
	cout << A << " " << B;
}
