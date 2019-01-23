#include <iostream>
using namespace std;
int main() {
  int Test, Brothers, Candy;
  int Father = 0;
  int Yours = 0;
  cin >> Test;
  for (int i = 0; i < Test; i++) {
    cin >> Candy >> Brothers;
    Yours = Candy / Brothers;
    Father = Candy % Brothers;
    cout << "You get " << Yours << " piece(s) and your dad gets " << Father << " piece(s). " << endl;
  }
}
