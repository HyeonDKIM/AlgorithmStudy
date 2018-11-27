#include <iostream>
using namespace std;

int main(void) {
  int n = 1;
  int SquareNum = 0;
  while (n != 0) {
    cin >> n;
    if (n == 0)
      break;
    for (int i = 0; i <= n; i++) {
      SquareNum = SquareNum + i * i;
    }
    cout << SquareNum << endl;
    SquareNum = 0;
  }
}
