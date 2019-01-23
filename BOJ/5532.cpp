#include <iostream>
#include <Windows.h>
using namespace std;

int main(void) {
	int L, A, B, C, D;
	cin >> L;
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;

	int KoreanDays = 0;
	int MathDays = 0;

	KoreanDays = A / C;

	if (A%C != 0) {
		KoreanDays = KoreanDays + 1;
	}

	MathDays = B / D;

	if (B%D != 0) {
		MathDays = MathDays + 1;
	}

	int StudyDays = 0;

	if (KoreanDays > MathDays) {
		StudyDays =  KoreanDays;
	}
	else if (KoreanDays < MathDays) {
		StudyDays = MathDays;
	}
	else if (KoreanDays == MathDays)
		StudyDays = KoreanDays;

	cout << L - StudyDays << endl;

	system("pause");

}
