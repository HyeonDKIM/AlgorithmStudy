#include <iostream>
using namespace std;
int main() {
  int T, H, W, N;
  int Wcount, Hcount, room;
  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> H >> W >> N;
    room = 0;
    Hcount = 0;
    Wcount = 1;
    while (N > H) {
      N = N - H;
      Wcount++;
    }
    Hcount = N;
    room = Hcount * 100 + Wcount;
    cout << room << endl;
  }
}
