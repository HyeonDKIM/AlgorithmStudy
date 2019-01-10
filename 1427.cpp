#include <iostream>
#include <string>
using namespace std;

// 1427번 소트인사이드

int main() {
	string s;
	cin >> s;
	int temp;

	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < s.size(); j++) {
			if (s[i] > s[j]) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	cout << s << endl;
}
