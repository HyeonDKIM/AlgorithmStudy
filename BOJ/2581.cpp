#include <iostream>
#include <queue>
using namespace std;

int M, N;
int arr[10001] = { 0, };

queue<int> sum_q;
queue<int> min_q;

int main() {
	scanf("%d %d", &M, &N);
	for (int i = 2; i <=N; i++) {
		if (arr[i] == 1) continue;
		sum_q.push(i);
		min_q.push(i);
		for (int j = i + i; j <= N; j += i)
			arr[j] = 1;
	}
	int size = sum_q.size();
	int sum = 0;
	int min = -1;

	for (int i = 0; i < size; i++) {
		if (min_q.front() >= M) {
			min = min_q.front();
			break;
		}
		min_q.pop();
	}

	for (int i = 0; i < size; i++) {
		if (sum_q.front() >= M) {
			sum += sum_q.front();
		}
		sum_q.pop();
	}

	if (sum != 0)
		printf("%d\n", sum);
	printf("%d", min);
}
