#include <iostream>
using namespace std;

// 버블 정렬 알고리즘

int main() {
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	int temp;

	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 9 - j; i++) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		cout << array[i] << " ";
}
// 시간 복잡도 = O(NxN)
