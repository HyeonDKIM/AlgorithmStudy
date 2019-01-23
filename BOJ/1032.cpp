#include <iostream>
#include <string>
#include <vector>
using namespace std;

//1032번 명령 프롬프트

int main() {
	string pattern;
	string prevPattern = " ";
	string nextPattern = " ";
	//string printPattern;

	vector<char> tempPattern;

	int N;
	cin >> N;
	while (N != 0) {
		cin >> pattern;

		if (prevPattern == " ")
			prevPattern = pattern;

		nextPattern = pattern;

		for (int i = 0; i < prevPattern.size(); i++) {
			if (prevPattern[i] == nextPattern[i]) {
				tempPattern.push_back(prevPattern[i]);
			}
			else if (prevPattern[i] != nextPattern[i])
				tempPattern.push_back('?');
		}

		for (int i = 0; i < prevPattern.size(); i++) {
			prevPattern[i] = tempPattern.at(i);
		}
		tempPattern.clear();
		N--;
	}

	for (int i = 0; i < prevPattern.size(); i++) {
		cout << prevPattern[i];
	}
}
