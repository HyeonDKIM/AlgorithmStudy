#include <iostream>
using namespace std;

//5176번 대회 자리

int main() {
	int K;
	cin >> K;

	for (int i = 0; i < K; i++) {
		int P, M;
		cin >> P >> M;
		int Wanttosit[500];
		int sitNum[500];
		int CantAttend = 0;

		for (int j = 0; j < 500; j++)
			sitNum[j] = 0;

		for (int j = 0; j < P; j++)
			cin >> Wanttosit[j];

		for (int j = 0; j < M; j++) {
			for (int k = 0; k < P; k++) {
				if (Wanttosit[k] == j + 1)
					sitNum[j]++;
			}
		}
		for (int j = 0; j < M; j++) {
			if (sitNum[j] != 0)
				CantAttend += sitNum[j] - 1;
		}
		cout << CantAttend << endl;
	}
}
