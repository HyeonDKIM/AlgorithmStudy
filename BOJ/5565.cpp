#include <iostream>
#include <algorithm>
#include <Windows.h>
using namespace std;

int main(void) {

	int AllSum;
	int Book[9];
	int ArrSum = 0;

	cin >> AllSum;

	for (int i = 0; i < 9; i++) 
		cin >> Book[i];

	for (int i = 0; i < 9; i++)
		ArrSum = ArrSum + Book[i];

	cout << AllSum - ArrSum << endl;

	system("pause");

}
