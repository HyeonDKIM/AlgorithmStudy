#include <iostream>
using namespace std;

//11724번 연결 요소의 개수
int matrix[1001][1001];
int visited[1000] = { 0, };
int N, M;
//queue<int> q;

void dfs(int start) {
	visited[start] = 1;
	for (int i = 1; i <= N; i++) {
		if (matrix[start][i] == 1 && visited[i] != 1) {
			visited[i] = 1;
			dfs(i);
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
				dfs(i);
				count++;
			}
		}
	}
	cout << count << endl;
}
