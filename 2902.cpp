#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// 2902번 KMP는 왜 KMP일까?

int main() {

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A'&&s[i]<='Z'&&s[i]!='-')
			cout << s[i];
	}
	cout << endl;
}
