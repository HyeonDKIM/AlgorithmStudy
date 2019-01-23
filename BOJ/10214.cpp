#include <iostream>
using namespace std;
int main() {
  int T, Y, K, Ypoint, Kpoint;
  cin >> T;
  for (int j = 0; j < T; j++) {
    Ypoint = 0;
    Kpoint = 0;
    for (int i = 0; i < 9; i++) {
      cin >> Y >> K;
      if (Y > K)
        Ypoint++;
      else if (K > Y)
        Kpoint++;
      else
        continue;
    }
    if (Ypoint > Kpoint)
      cout << "Yonsei" << endl;
    else if (Kpoint > Ypoint)
      cout << "Korea" << endl;
    else
      cout << "Draw" << endl;
  }
}
