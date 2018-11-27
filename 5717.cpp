#include <iostream>
using namespace std;

int main(void) {
  int M = 1;
  int F = 1;
  int sum = 0;
  while (M != 0 && F != 0) {
    cin >> M >> F;
    if (M == 0 & F == 0)
      break;
    sum = M + F;
    cout << sum << endl;

  }
}
