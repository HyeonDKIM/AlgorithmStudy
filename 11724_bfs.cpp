#include <iostream>
#include <queue>
using namespace std;

//11724번 연결 요소의 개수
int matrix[1001][1001];
int visited[1000] = { 0, };
int N, M;
queue<int> q;

void bfs(int start) {
	q.push(start);
	visited[start] = 1;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (matrix[x][i] == 1 && visited[i] != 1) {
				q.push(i);
				visited[i] = 1;
			}
		}
	}
}


int main() {
	int u, v;
	cin >> N >> M;
	int count = 0;

	for (int i = 1; i <= M; i++) {
		cin >> u >> v;
		matrix[u][v] = matrix[v][u] = 1;
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (visited[i] != 1) {
				bfs(i);
				count++;
			}
		}
	}
	cout << count << endl;
}
