#include <iostream>
using namespace std;

int main(void) {
  int A, B;
  cin >> A >> B;
  int numerator = 0;
  int denominator = 0;
  numerator = B - A;
  denominator = B;
  cout << numerator << " " << denominator << endl;
}
