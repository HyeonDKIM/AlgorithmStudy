#include <iostream>
using namespace std;
int main() {
  int numerator = 1;
  int denominator = 1;
  int num = 0;
  while (numerator != 0 || denominator != 0) {
    cin >> numerator >> denominator;
    if (numerator == 0 && denominator == 0)
      break;
    num = numerator / denominator;
    numerator = numerator % denominator;
    cout << num << " " << numerator << " / " << denominator << endl;
  }
}
