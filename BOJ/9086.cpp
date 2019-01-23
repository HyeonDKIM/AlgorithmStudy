#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main(void) {
	int T;
	cin >> T;
	string s;

	for (int i = 0; i < T; i++) {
		cin >> s;
		cout << s.at(0);
		cout << s.at(s.length()-1) << endl;
	}
	system("pause");
}
