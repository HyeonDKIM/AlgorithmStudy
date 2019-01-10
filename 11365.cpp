#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// 11365번 !밀비 급일

int main() {

	string s;

	while (s != "END") {
		getline(cin, s);
		if (s == "END")
			break;
		for (int i = s.size() - 1; i >= 0; i--)
			cout << s[i];
		cout << endl;
	}
}
