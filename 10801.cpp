#include <iostream>
using namespace std;
int main() {
  int A[10];
  int B[10];
  int Acount = 0;
  int Bcount = 0;
  for (int i = 0; i < 10; i++)
    cin >> A[i];
  for (int i = 0; i < 10; i++)
    cin >> B[i];
  for (int i = 0; i < 10; i++) {
    if (A[i] > B[i])
      Acount++;
    else if (B[i] > A[i])
      Bcount++;
    else {
      Acount++;
      Bcount++;
    }
  }
  if (Acount > Bcount)
    cout << "A" << endl;
  else if (Bcount > Acount)
    cout << "B" << endl;
  else
    cout << "D" << endl;
}
