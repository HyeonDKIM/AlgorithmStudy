#include <iostream>
#include <string>
using namespace std;

//1152번 단어의 개수

int main() {
	string s;
	getline(cin, s); // 문자열 입력

	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ')
			count++;
	}
	if (s[0] == ' ')
		count--;
	if (s[s.length() - 1] == ' ')
		count--;

	cout << count+1 << endl;
}
