#include <iostream>
using namespace std;

int main(void) {
  int K, N, M;
  int money = 0;
  cin >> K >> N >> M;;
  int price = K * N;
  if (price > M) {
    money = price - M;
  }
  else if (price < M) {
    money = 0;
  }
  cout << money << endl;
}
