#include <iostream>
using namespace std;

int main(void) {
  int T;
  cin >> T;
  int sum = 0;
  int num1;
  int num2;
  for (int i = 0; i < T; i++) {
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "Case " << i + 1 << ": " << sum << endl;
  }
}
