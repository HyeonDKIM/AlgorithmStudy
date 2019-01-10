#include <iostream>
#include <algorithm>

using namespace std;

// 1085번 직사각형에서 탈출

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int x_w = w - x;
	int y_h = h - y;
	int minVal = 0;
	
	if ((x <= y) && (x <= x_w) && (x <= y_h))
		minVal = x;
	else if ((y <= x) && (y <= x_w) && (y <= y_h))
		minVal = y;
	else if ((x_w <= x) && (x_w <= y) && (x_w < y_h))
		minVal = x_w;
	else
		minVal = y_h;

	cout << minVal << endl;
}
