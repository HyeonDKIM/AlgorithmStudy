#include <iostream>
using namespace std;

class Reference {
public:
	void Ref(int a) {
		if (a == 0)
			cout << 'D' << endl;
		else if (a == 1)
			cout << 'C' << endl;
		else if (a == 2)
			cout << 'B' << endl;
		else if (a == 3)
			cout << 'A' << endl;
		else if (a == 4)
			cout << 'E' << endl;
	}
};

int main(void) {

	int a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4;
	int Fcount = 0;
	int Scount = 0;
	int Tcount = 0;

	cin >> a1 >> a2 >> a3 >> a4;
	cin >> b1 >> b2 >> b3 >> b4;
	cin >> c1 >> c2 >> c3 >> c4;

	int First[4] = { a1,a2,a3,a4 };
	int Second[4] = { b1,b2,b3,b4 };
	int Third[4] = { c1,c2,c3,c4 };

	for (int i = 0; i < 4; i++) {
		if (First[i] == 1)
			Fcount++;
		if (Second[i] == 1)
			Scount++;
		if (Third[i] == 1)
			Tcount++;
	}
	Reference R;
	R.Ref(Fcount);
	R.Ref(Scount);
	R.Ref(Tcount);
}
