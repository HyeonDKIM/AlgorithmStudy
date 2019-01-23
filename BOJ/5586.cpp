#include <iostream>
using namespace std;

int main(void) {

	char JOIOI[10002];

	cin >> JOIOI;

	int JOIcount = 0;
	int IOIcount = 0;

	for (int i = 0; i < 10002; i++) {
		if (JOIOI[i] == 'J') {
			if (JOIOI[i + 1] == 'O') {
				if (JOIOI[i + 2] == 'I')
					JOIcount += 1;
			}
		}

		if (JOIOI[i] == 'I') {
			if (JOIOI[i + 1] == 'O') {
				if (JOIOI[i + 2] == 'I')
					IOIcount += 1;
			}
		}
	}

	cout << JOIcount << endl;
	cout << IOIcount << endl;
}
