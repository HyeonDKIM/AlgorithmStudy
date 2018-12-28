#include <iostream>
using namespace std;

int main() {
	int C;
	cin >> C;
	for (int i = 0; i < C; i ++ ) {
		int N;
		int ScoreArr[1000];
		cin >> N;
		int sum = 0;

		for (int j = 0; j < N; j++) {
			cin >> ScoreArr[j];
		}
		for (int k = 0; k < N; k++) {
			sum = sum + ScoreArr[k];
		}

		float average = sum / N;
		float count = 0.0;

		for (int l = 0; l < N; l++) {
			if (ScoreArr[l] > average) {
				count = count + 1;
			}
		}
		float percent = (count / N) * 100;
		cout << fixed;
		cout.precision(3);
		cout << percent <<"%"<<endl;
	}
}
