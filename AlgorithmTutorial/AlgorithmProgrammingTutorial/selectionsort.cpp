#include <iostream>
using namespace std;

// 선택 정렬 알고리즘

int main() {
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	int temp, min, index;
	
	for (int i = 0; i < 10; i++) {
		min = 9999;
		for (int j = i; j < 10; j++) {
			if (array[j] < min) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp; // 맨 앞의 값과 스와핑
	}
	for (int i = 0; i < 10; i++)
		cout << array[i];
}
// 시간 복잡도 = O(NxN)
