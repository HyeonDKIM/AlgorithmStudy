#include <iostream>
#include <queue>
using namespace std;

int M, N;
queue<int> q;
int arr[1000001] = { 0, };

int main() {
	scanf("%d %d", &M, &N);
	int size = 0;
	for (int i = 2; i <=N; i++) {
		if (arr[i] == 1)
			continue;
		q.push(i);
		for (int j = i + i; j <=N; j += i)
			arr[j] = 1;
	}
	size = q.size();
	for (int i = 0; i < size; i++) {
		if (q.front() >= M)
			printf("%d\n", q.front());
		q.pop();
	}
}
