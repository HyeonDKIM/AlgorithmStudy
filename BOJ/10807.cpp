#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int Narr[100];
  for (int i = 0; i < N; i++)
    cin >> Narr[i];
  int v;
  int count = 0;
  cin >> v;
  for (int i = 0; i < N; i++) {
    if (Narr[i] == v)
      count++;
  }
  cout << count << endl;
}
