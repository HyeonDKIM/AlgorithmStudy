#include <iostream>
using namespace std;

int main(void) {
  int test;
  int s, n, q, p;
  int sum = 0;
  cin >> test;
  for (int i = 0; i < test; i++) {
    cin >> s;
    cin >> n;
    for (int j = 0; j < n; j++) {
      cin >> q >> p;
      sum += q * p;
    }
    sum += s;
    cout << sum << endl;
    sum = 0;
  }
}
