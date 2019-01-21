#include <iostream>
using namespace std;

// 힙 정렬 알고리즘
// 힙 트리 구조 이용

int number = 9;
int heap[9] = { 7,6,5,8,3,5,9,1,6 };

int main() {
	//최대 힙 구조 만들기
	for (int i = 1; i < number; i++) {
		int c = i; //자식
		do {
			int root = (c - 1) / 2;
			if (heap[root] < heap[c]) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while (c != 0);
	}
	//크기 줄이며 반복적인 힙 구성
	for (int i = number - 1; i >= 0; i--) {
		int temp = heap[0];
		heap[0] = heap[i]; //가장 큰 값 맨 뒤로 보내기
		heap[i] = temp;
		int root = 0;
		int c = 1;
		do {
			c = 2 * root + 1;
			//자식 중 더 큰값 찾기
			if (heap[c] < heap[c + 1] && c < i - 1)
				c++;
			//루트보다 자식이 더 크면 교환
			if (heap[root] < heap[c] && c < i) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while (c < i);
	}
	for (int i = 0; i < number; i++)
		cout << heap[i] << " ";
}

// 힙 생성 알고리즘 평균 시간 복잡도 = O(logN)
// 모든 정점에 대해 heapify 수행시 시간 복잡도 = O(NxlogN) (실제로는 절반의 개수 수행)
// 실제 시간 복잡도 = 1/2xO(NxlogN) = O(N)
// 정렬의 시간 복잡도 = O(NxlogN)
