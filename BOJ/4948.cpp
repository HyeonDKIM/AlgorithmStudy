#include<iostream>
#include<queue>
#pragma warning (disable:4996)
using namespace std;

int n = -1;
int arr[246913] = { 0, }; //123456*2
queue<int> q;

int main() {

	while (n != 0) {
		scanf("%d", &n);
		if (n == 0)
			break;
		//n ,2n
		for (int i = 2; i <= 2 * n; i++) {
			if (arr[i] == 1) continue;
			q.push(i);
			for (int j = i + i; j <= 2 * n; j += i) {
				arr[j] = 1;
			}
		}
		int size = q.size();
		int count = 0;

		for (int i = 0; i < size; i++) {
			if (q.front() > n) count++;
			q.pop();
		}
		printf("%d\n", count);

		for (int i = 0; i < 246913; i++)
			arr[i] = 0;
	}
}
