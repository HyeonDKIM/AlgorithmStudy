#include <iostream>
#include <string>
using namespace std;

//3059번 등장하지 않는 문자의 합

int main() {
	int T = 0;
	cin >> T;
	string S;
	for (int k = 0; k < T; k++) {
		int sum = 0;
		cin >> S;
		char alphabet[26] = { 'A','B','C','D','E','F','G','H','I','J','K',
			'L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

		for (int i = 0; i < S.size(); i++) {
			for (int j = 0; j < 26; j++) {
				if (S[i] == alphabet[j])
					alphabet[j] = 0;
			}
		}
		for (int i = 0; i < 26; i++) {
			if (alphabet[i] != 0) {
				alphabet[i] = i + 65;
				sum += alphabet[i];
			}
		}
		cout << sum << endl;
	}
}
