#include <iostream>
using namespace std;

int main(void) {
  int T, V, E;
  cin >> T;
  int answer = 0;
  for (int i = 0; i < T; i++) {
    cin >> V >> E;
    answer = 2 - V + E;
    cout << answer << endl;
    answer = 0;
  }
}
