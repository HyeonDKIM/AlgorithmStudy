#include <iostream>
using namespace std;

int main(void) {

	int FirstPosition_x, FirstPosition_y, SecondPosition_x, SecondPosition_y, ThirdPosition_x, ThirdPosition_y;
	cin >> FirstPosition_x >> FirstPosition_y;
	cin >> SecondPosition_x >> SecondPosition_y;
	cin >> ThirdPosition_x >> ThirdPosition_y;
	int FourthPosition_x = 0;
	int FourthPosition_y = 0;

	if (FirstPosition_x == SecondPosition_x) {
		FourthPosition_x = ThirdPosition_x;
	}
	else if (SecondPosition_x == ThirdPosition_x) {
		FourthPosition_x = FirstPosition_x;
	}
	else if (ThirdPosition_x == FirstPosition_x) {
		FourthPosition_x = SecondPosition_x;
	}

	if (FirstPosition_y == SecondPosition_y) {
		FourthPosition_y = ThirdPosition_y;
	}
	else if (SecondPosition_y == ThirdPosition_y) {
		FourthPosition_y = FirstPosition_y;
	}
	else if (ThirdPosition_y == FirstPosition_y) {
		FourthPosition_y = SecondPosition_y;
	}
	cout << FourthPosition_x << " " << FourthPosition_y;
}
