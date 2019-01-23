#include <iostream>
using namespace std;
int main() {
  int n;
  int Chang;
  int Sang;
  int ChangScore = 100;
  int SangScore = 100;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> Chang >> Sang;
    if (Chang > Sang)
      SangScore = SangScore - Chang;
    else if (Sang > Chang)
      ChangScore = ChangScore - Sang;
    else
      continue;
  }
  cout << ChangScore << endl;
  cout << SangScore << endl;
}
