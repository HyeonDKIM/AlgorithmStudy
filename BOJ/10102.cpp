#include <iostream>
using namespace std;

int main(void) {
  int V;
  char arr[15];
  cin >> V;
  cin >> arr;
  int CountA = 0;
  int CountB = 0;
  for (int i = 0; i < 15; i++) {
    if (arr[i] == 'A')
      CountA++;
    else if (arr[i] == 'B')
      CountB++;
  }
  if (CountA > CountB)
    cout << "A" << endl;
  else if (CountA < CountB)
    cout << "B" << endl;
  else
    cout << "Tie" << endl;
}
