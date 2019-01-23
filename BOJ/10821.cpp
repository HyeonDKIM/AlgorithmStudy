#include <iostream>
#include <string>
using namespace std;

//10821번 정수의 개수

int main() {

	string S;
	int count = 1;
	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		if (S[i] == ',')
			count++;
	}
	cout << count << endl;
}
