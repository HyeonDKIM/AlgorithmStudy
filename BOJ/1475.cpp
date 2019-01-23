#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  char N[7];
  cin >> N;
  int zero = 0; int one = 0; int two = 0; int three = 0; int four = 0; int five = 0; int six = 0; int seven = 0; int eight = 0; int set = 0;
  for (int i = 0; i < 7; i++) {
    switch (N[i]) {
    case '0':
      zero++;
      break;
    case '1':
      one++;
      break;
    case '2':
      two++;
      break;
    case '3':
      three++;
      break;
    case '4':
      four++;
      break;
    case '5':
      five++;
      break;
    case '6':
      six++;
      break;
    case '7':
      seven++;
      break;
    case '8':
      eight++;
      break;
    case '9':
      six++;
      break;
    }
  }
  if (six % 2 == 1)
    six = six / 2 + 1;
  else if (six % 2 == 0)
    six = six / 2;
  set = max(eight, max(seven, max(six, max(five, max(four, max(three, max(two, max(one, zero))))))));
  cout << set << endl;
}
