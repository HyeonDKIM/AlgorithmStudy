#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 13717번 포켓몬 GO

string PokeName[70];

int Evolution(int NeedCandy, int MyCandy) {
	int Evol = 0;
	while (MyCandy / NeedCandy != 0) {
		Evol++;
		MyCandy = MyCandy - NeedCandy + 2;
	}
	return Evol;
}

int main(void) {
	int N;
	cin >> N;

	int need, mine, BiggestIndex;
	int Biggest = -1;
	int EvolNum[70];
	int CanEvol = 0;

	for (int i = 0; i < N; i++) {
		cin >> PokeName[i];
		cin >> need >> mine;
		EvolNum[i] = Evolution(need, mine);
		CanEvol += Evolution(need, mine);
		if (Biggest < EvolNum[i])
			Biggest = EvolNum[i];
	}

	for (int i = 0; i < N; i++) {
		if (EvolNum[i] == Biggest) {
			BiggestIndex = i;
			break;
		}
	}
	cout << CanEvol << endl;
	cout << PokeName[BiggestIndex] << endl;
}
