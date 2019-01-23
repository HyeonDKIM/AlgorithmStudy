#include <iostream>
#include <string>
using namespace std;

//5622번 다이얼
// 숫자 1은 2초, 한 칸 옆의 숫자는 +1초

int main() {
	
	string DialLetter;
	cin >> DialLetter;
	int time = 0;

	for (int i = 0; i < DialLetter.size(); i++) {
		if (DialLetter[i] < 'D')
			time = time + 3;
		else if (DialLetter[i] < 'G')
			time = time + 4;
		else if (DialLetter[i] < 'J')
			time = time + 5;
		else if (DialLetter[i] < 'M')
			time = time + 6;
		else if (DialLetter[i] < 'P')
			time = time + 7;
		else if (DialLetter[i] < 'T')
			time = time + 8;
		else if (DialLetter[i] < 'W')
			time = time + 9;
		else if (DialLetter[i] <= 'Z')
			time = time + 10;
	}

	cout << time << endl;
}
