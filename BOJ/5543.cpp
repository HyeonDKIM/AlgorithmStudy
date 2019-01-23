#include <iostream>
#include <algorithm>
#include <Windows.h>
using namespace std;

int main(void) {

	int Burger[3];
	int Drink[2];

	for (int i = 0; i < 3; i++)
		cin >> Burger[i];
	for (int i = 0; i < 2; i++)
		cin >> Drink[i];

	sort(Burger, Burger + 3);
	sort(Drink, Drink + 2);

	int Setmenu = Burger[0] + Drink[0] - 50;
	cout << Setmenu << endl;

	system("pause");

}
