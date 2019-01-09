#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string str[20000];

bool compare(string a, string b) {
	if (a.length() > b.length())
		return 0;
	else if (a.length() < b.length())
		return 1;
	else {
		return a < b;
	}
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> str[i];

	sort(str, str + N, compare);

	for (int i = 0; i < N; i++) {
		if (str[i] == str[i - 1])
			continue;
		else
			cout << str[i] << endl;
	}
}
