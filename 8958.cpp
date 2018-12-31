#include <iostream>
#include <string>
using namespace std;

//8958번 OX퀴즈

int main() {
	int T;
	cin >> T;
	string s;

	for (int i = 0; i < T; i++) {
		cin >> s;
		int score = 0;
		int scoresum = 0;

		for (int i = 0; i < s.size(); i++) {
			if(s[i]=='O'){
				score++;
				scoresum += score;
			}
			else if (s[i] == 'X') {
				score = 0;
				scoresum += score;
			}
		}
		cout << scoresum << endl;
	}
}
