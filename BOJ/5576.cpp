#include <iostream>
#include <algorithm>
#include <Windows.h>
using namespace std;

int main(void) {

	int W_Univ[10];
	int K_Univ[10];

	for (int i = 0; i < 10; i++)
		cin >> W_Univ[i];
	for (int i = 0; i < 10; i++)
		cin >> K_Univ[i];

	sort(W_Univ, W_Univ + 10);
	sort(K_Univ, K_Univ + 10);

	int WSum = 0;
	int KSum = 0;
	WSum = W_Univ[9] + W_Univ[8] + W_Univ[7];
	KSum = K_Univ[9] + K_Univ[8] + K_Univ[7];

	cout << WSum << " " << KSum;

	system("pause");

}
