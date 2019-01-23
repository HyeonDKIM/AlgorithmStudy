#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(void) {
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;

	int MultipleNumber = 0;
	MultipleNumber = A * B * C;

	int NumberArr[10]; //0부터10까지

	for (int i = 0; i < 10; i++) {
		NumberArr[i] = 0;
	}

	int MultipleNumberArr[9]; //최대 자릿수 9
	string str = to_string(MultipleNumber);

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < str.size(); j++) {
			if (char(i+'0') == str[j]) {
				NumberArr[i] = NumberArr[i] + 1;
			}
		}
	}

	for (int i = 0; i < sizeof(NumberArr)/sizeof(int); i++) {
		cout << NumberArr[i] << endl;
	}
}
