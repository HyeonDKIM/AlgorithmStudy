#include <iostream>
using namespace std;

// 병합 정렬 알고리즘
// 메모리 활용 비효율적
// 크기 1인 배열로 분리, 2, 4, 8 ... 개씩 묶어 정렬

const int number = 8;
int sorted[8]; // 정렬된 배열 저장, 정렬 배열은 반드시 전역변수로 선언

void merge(int a[], int m, int middle, int n) { // m 시작, middle 중간, n 끝
	int i = m;
	int j = middle + 1;
	int k = m;

	//작은 순서대로 배열에 삽입

	while (i <= middle && j <= n) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	//남은 데이터도 삽입
	if (i > middle) {
		for (int t = j; t <= n; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	//정렬된 배열 삽입
	for (int t = m; t <= n; t++) {
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n) {
	if (m < n) {
		int middle = (m + n) / 2;
		mergeSort(a, m, middle); // 왼쪽 배열 정렬
		mergeSort(a, middle + 1, n); // 오른쪽 배열 정렬
		merge(a, m, middle, n); // 합치기
	}
}
int main() {
	int array[8] = { 7,6,5,8,3,5,9,1 };
	mergeSort(array, 0, number - 1);
	for (int i = 0; i < number; i++) {
		cout << array[i] << " ";
	}
}

// 평균 시간 복잡도 = O(NxlogN)
