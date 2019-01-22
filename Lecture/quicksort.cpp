#include <iostream>
using namespace std;

// 퀵 정렬 알고리즘
// 특정한 값을 기준으로 큰 숫자와 작은 숫자를 나누기
// 기준 값 : Pivot 보통 첫번째 원소.


void quickSort(int *data, int start, int end) {
	if (start >= end) // 원소가 1개인 경우
		return;
	int key = start; // 키 값(피벗값)
	int i = start + 1; // 왼쪽 출발지점
	int j = end; // 오른쪽 출발지점
	int temp; // 위치 바꾸기 임시변수

	while (i <= j) { // 엇갈릴 때 까지 반복
		while (i <= end && data[i] <= data[key]) { // 키 값보다 큰 값을 만날 때 까지 반복
			i++;
		}
		while (data[j] >= data[key] && j > start) { // 키 값보다 작은 값을 만날 때 까지 반복
			j--;
		}
		if (i > j) { // 현재 엇갈린 상태면 키 값과 교체
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main() {
	int number = 10;
	int data[] = { 1,10,5,8,7,6,4,3,2,9 };

	quickSort(data, 0, number - 1);

	for (int i = 0; i < number; i++) {
		cout << data[i] << " ";
	}
}
// 평균 시간 복잡도 = O(NxlogN)
// 최악 시간 복잡도 = O(NxN)
