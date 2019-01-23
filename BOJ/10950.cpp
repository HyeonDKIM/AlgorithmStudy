#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	int a;
	int b;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b << endl;
	}
}
