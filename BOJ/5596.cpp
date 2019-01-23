#include <iostream>
#include <algorithm>
#include <Windows.h>
using namespace std;

int main(void) {

	int S[4];
	int T[4];
	int S_sum = 0;
	int T_sum = 0;

	for (int i = 0; i < 4; i++) {
		cin >> S[i];
		S_sum += S[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> T[i];
		T_sum += T[i];
	}

	int ans = max(S_sum, T_sum);
	if (S_sum == T_sum)
		ans = S_sum;

	cout << ans << endl;

	system("pause");
}
