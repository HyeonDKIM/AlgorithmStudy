#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	int price = 0;

	if (d1 == d2 && d2 == d3 && d3 == d1) {
		price = 10000 + d1 * 1000;
	}
	else if (d1 == d2 || d2 == d3 || d3 == d1) {
		if(d1==d2)
			price = 1000 + d1 * 100;
		else if(d2==d3)
			price = 1000 + d2 * 100;
		else if(d3==d1)
			price = 1000 + d3 * 100;
	}
	else if (d1 != d2 && d2 != d3 && d3 != d1) {
		int maxnum= max(d1, max(d2, d3));
		price = maxnum * 100;
	}
	cout << price << endl;
}