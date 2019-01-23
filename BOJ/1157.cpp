#include <iostream>
#include <string>
using namespace std;

//1157번 단어 공부

int main() {
	string input;
	cin >> input;

	char Alphabet;
	int int_alpha = 0;
	int Biggest = -1;
	int Biggestindex = 0;

	bool DontPrintQuestionMark = false;

	int alphabetArr[26];

	for (int i = 0; i < 26; i++)
		alphabetArr[i] = 0;

	for (int i = 0; i < input.size(); i++) {
		Alphabet = input[i];
		int_alpha = int(Alphabet) - 97;
		if (int_alpha < 0)
			int_alpha = int_alpha + 32;
		alphabetArr[int_alpha]++;

		int_alpha = 0;
	}

	for (int i = 0; i < 26; i++) {
		if (Biggest == alphabetArr[i] && Biggest > 0) {
			DontPrintQuestionMark = false;
		}
		else if (Biggest < alphabetArr[i]) {
			Biggest = alphabetArr[i];
			Biggestindex = i;
			DontPrintQuestionMark = true;
		}
	}

	if (DontPrintQuestionMark)
		cout << char(Biggestindex + 65) << endl;
	else
		cout << "?" << endl;
}
