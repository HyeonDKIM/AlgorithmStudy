#include <iostream>
#include <string>
using namespace std;

//10987번 모음의 개수

int main() {
	char c[101];
	cin >> c;
	int count = 0;
	for (int i = 0; i < 101; i++) {
		if (c[i] == 'a') count++;
		if (c[i] == 'e') count++;
		if (c[i] == 'i') count++;
		if (c[i] == 'o') count++;
		if (c[i] == 'u') count++;
	}
	cout << count << endl;
}