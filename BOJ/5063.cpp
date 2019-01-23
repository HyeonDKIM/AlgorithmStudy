#include <iostream>
using namespace std;

int main(void) {
	int N, r, e, c;
	cin >> N;
	int Money = 0;

	for (int i = 0; i < N; i++) {
		cin >> r >> e >> c;
		Money = e - c;
		if (Money < r)
			cout << "do not advertise" << endl;
		if (Money == r)
			cout << "does not matter" << endl;
		if (Money > r)
			cout << "advertise" << endl;
	}
}
