#include <iostream>
using namespace std;
int main() {
  int A, B, C, D, P;
  cin >> A >> B >> C >> D >> P;
  int x_money = 0;
  int y_money = 0;
  x_money = A * P;
  int jud = P - C;
  if (jud <= 0)
    jud = 0;
  y_money = B + jud * D;

  if (x_money < y_money)
    cout << x_money << endl;
  else
    cout << y_money << endl;
}
