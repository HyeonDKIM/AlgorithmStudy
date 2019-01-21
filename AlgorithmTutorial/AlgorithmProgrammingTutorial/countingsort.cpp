#include <iostream>
using namespace std;

// 계수 정렬 알고리즘
// 범위 조건이 있을 시 빠르다.

int main() {
	int temp;
	int count[5];
	int array[30] = {
		1,3,2,4,3,2,5,3,1,2,
		3,4,4,3,5,1,2,3,5,2,
		3,1,4,3,5,1,2,1,1,1 };

	for (int i = 0; i < 5; i++)
		count[i] = 0;
	for (int i = 0; i < 30; i++) {
		count[array[i] - 1]++;
	}
	for (int i = 0; i < 5; i++) {
		if (count[i] != 0) {
			for (int j = 0; j < count[i]; j++)
				cout << i+1 << " ";
		}
	}
}

// 갯수만 세면 되므로 위치 바꿀 필요 x
// 정렬의 시간 복잡도 = O(N)
