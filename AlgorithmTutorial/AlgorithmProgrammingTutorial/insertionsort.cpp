#include <iostream>
using namespace std;

// 삽입 정렬 알고리즘

int main() {
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	int i, j, temp;

	for (i = 0; i < 9; i++) {
		j = i;
		while (array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	for (i = 0; i < 10; i++)
		cout << array[i] << " ";
}
// 시간 복잡도 = O(NxN)
