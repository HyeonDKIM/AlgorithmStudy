#include <iostream>
#include <string>
using namespace std;

// 2941번 크로아티아 알파벳

int main() {
	
	string CroAlpha;
	cin >> CroAlpha;

	int AlphaNum = 0;

	for (int i = 0; i < CroAlpha.size(); i++)
		AlphaNum++;

	for (int i = 1; i < CroAlpha.size(); i++) {
		if (CroAlpha[i] == '=')
			AlphaNum--;
		else if (CroAlpha[i] == '-')
			AlphaNum--;
		else if (CroAlpha[i - 1] == 'l'&&CroAlpha[i] == 'j')
			AlphaNum--;
		else if (CroAlpha[i - 1] == 'n'&&CroAlpha[i] == 'j')
			AlphaNum--;
	}
	for (int i = 2; i < CroAlpha.size(); i++) {
		if (CroAlpha[i - 2] == 'd'&&CroAlpha[i - 1] == 'z'&&CroAlpha[i] == '=')
			AlphaNum--;
	}

	cout << AlphaNum << endl;
}
