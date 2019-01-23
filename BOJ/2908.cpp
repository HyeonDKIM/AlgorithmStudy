#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int A, B;
	cin >> A >> B;
	
	int _A_Hundred = A / 100;
	int _A_Ten = A % 100 / 10;
	int _A_One = A % 10;

	int _A = _A_One * 100 + _A_Ten * 10 + _A_Hundred;

	int _B_Hundred = B / 100;
	int _B_Ten = B % 100 / 10;
	int _B_One = B % 10;

	int _B = _B_One * 100 + _B_Ten * 10 + _B_Hundred;

	int Answer = max(_A, _B);
	cout << Answer;

}
