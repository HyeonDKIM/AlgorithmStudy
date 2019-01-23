#include <iostream>
using namespace std;

int main(void) {
	int Input_King, Input_Queen, Input_Rook, Input_Bishop, Input_Knight, Input_Pawn;

	cin >> Input_King >> Input_Queen >> Input_Rook >> Input_Bishop >> Input_Knight >> Input_Pawn;

	int King = 1;
	int Queen = 1;
	int Rook = 2;
	int Bishop = 2;
	int Knight = 2;
	int Pawn = 8;

	cout << King - Input_King << " " << Queen - Input_Queen << " " << Rook - Input_Rook << " " << Bishop - Input_Bishop << " " << Knight - Input_Knight << " " << Pawn - Input_Pawn;

}
