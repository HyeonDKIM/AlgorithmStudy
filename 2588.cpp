#include <iostream>
using namespace std;

int main(void) {
	
	int FirstLine, SecondLine;

	cin >> FirstLine >> SecondLine;
	
	int Second_F = 0;
	int Second_S = 0;
	int Second_T = 0;

	Second_F = SecondLine % 10;
	Second_S = (SecondLine % 100) / 10;
	Second_T = SecondLine / 100;

	int ThirdLine = 0;
	int FourthLine = 0;
	int FifthLine = 0;

	ThirdLine = FirstLine * Second_F;
	FourthLine = FirstLine * Second_S;
	FifthLine = FirstLine * Second_T;

	cout << ThirdLine << endl;
	cout << FourthLine << endl;
	cout << FifthLine << endl;
	cout << FirstLine * SecondLine << endl;

}
