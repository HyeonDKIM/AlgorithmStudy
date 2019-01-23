#include <iostream>
using namespace std;

int main(void) {
  int month, day;
  cin >> month >> day;
  if (month == 2) {
    if (day == 18)
      cout << "Special" << endl;
    else if (day < 18)
      cout << "Before" << endl;
    else if (day > 18)
      cout << "After" << endl;
  }
  else if (month < 2)
    cout << "Before" << endl;
  else
    cout << "After" << endl;
}
