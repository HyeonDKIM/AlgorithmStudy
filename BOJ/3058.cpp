#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

	int T;
	cin >> T;
	int EvenNumber[7];
	int sum = 0;
	int LeastNum = 0;

	for (int j = 0; j < T; j++) {
		for (int i = 0; i < 7; i++) {
			cin >> EvenNumber[i];
			if (EvenNumber[i] % 2 == 0)
				sum = sum + EvenNumber[i];
			if (EvenNumber[i] % 2 == 1)
				EvenNumber[i] = 101;
		}
		sort(EvenNumber, EvenNumber+7);
		LeastNum = EvenNumber[0];

		cout << sum << " " << LeastNum << endl;
		sum = 0;
	}
}
