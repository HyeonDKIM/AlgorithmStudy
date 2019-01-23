#include <iostream>
#include <string>
using namespace std;

//5355번 화성 수학

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string s;
		float num;
		cin >> num;
		getline(cin, s);

		for (int j = 0; j < s.size(); j++) {
			if (s[j] == '@')
				num *= 3;
			else if (s[j] == '%')
				num += 5;
			else if (s[j] == '#')
				num -= 7;
			else
				continue;
		}
		cout << fixed;
		cout.precision(2);
		cout << num << endl;
	}
}
