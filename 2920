#include <iostream>
using namespace std;

int main(void) {
	int c, d, e, f, g, a, b, C;
	cin >> c >> d >> e >> f >> g >> a >> b >> C;

	int NumArr[8] = { c,d,e,f,g,a,b,C };

	int asendingcount = 0;
	int descendingcount = 0;

	for (int i = 0; i < 8; i++) {
		if (i + 1 == NumArr[i]) {
			asendingcount += 1;
		}
		else if (8 - i == NumArr[i]) {
			descendingcount += 1;
		}
	}

	if (asendingcount == 8) {
		cout << "ascending";
	}
	else if (descendingcount == 8) {
		cout << "descending";
	}
	else 
		cout<<"mixed";
}
