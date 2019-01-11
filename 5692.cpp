#include <iostream>
using namespace std;

//5692번 팩토리얼 진법

int Fac(int n) {
	if (n >= 10000)
		return n / 10000 * 5 * 4 * 3 * 2 * 1 + n % 10000 / 1000 * 4 * 3 * 2 * 1 + n % 1000 / 100 * 3 * 2 * 1 + n % 100 / 10 * 2 * 1 + n % 10;
	else if (n >= 1000)
		return n % 10000 / 1000 * 4 * 3 * 2 * 1 + n % 1000 / 100 * 3 * 2 * 1 + n % 100 / 10 * 2 * 1 + n % 10;
	else if (n >= 100)
		return n % 1000 / 100 * 3 * 2 * 1 + n % 100 / 10 * 2 * 1 + n % 10;
	else if (n >= 10)
		return n % 100 / 10 * 2 * 1 + n % 10;
	else
		return n % 10;
}


int main() {

	int FacNum;

	while (1) {
		scanf("%d", &FacNum);
		if (FacNum == 0)
			break;

		printf("%d\n", Fac(FacNum));
	}
}
