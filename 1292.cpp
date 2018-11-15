#include <iostream>
using namespace std;

int main(void) {

	int arr[1000];
	int A = 0;
	int B = 0;
	int n = 0;
	int Firstnum = 1;

	cin >> A >> B;

	for (int i = 0; n < 1000; i++) {
		for (int j = 0; j <= i; j++) {
			arr[n++] = Firstnum;

			if (n == 1000)
				break;
		}
		Firstnum++;
	}

	A = A - 1;
	B = B - 1;
	int Sum = 0;

	for (int k = A; A <= B; A++) {
		Sum = Sum + arr[A];
	}

	cout << Sum;
}
