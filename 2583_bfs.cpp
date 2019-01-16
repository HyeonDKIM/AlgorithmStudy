#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

//11724번 연결 요소의 개수
int matrix[100][100];
int visited[100][100];
int M, N, K;
queue<pair<int, int> > q;
vector<int> v;

int x_dir[] = { 1,-1,0,0 };
int y_dir[] = { 0,0,1,-1 };

void bfs(int x, int y) {
	int area = 1;
	q.push({x,y });
	visited[x][y] = 1;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_y = y + y_dir[i];
			int next_x = x + x_dir[i];

			if (next_y < 0 || next_y >= M || next_x < 0 || next_x >= N)
				continue;
			if (matrix[next_x][next_y] == 0 && visited[next_x][next_y] != 1) {
				q.push({ next_x,next_y });
				visited[next_x][next_y] = 1;
				area++;
			}
		}
	}
	v.push_back(area);
}


int main() {
	cin >> M >> N >> K;
	int bfs_count = 0;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = 0;
		}
	}

	int left_x, left_y, right_x, right_y;

	for (int a = 0; a < K; a++) {
		cin >> left_x >> left_y >> right_x >> right_y;

		for (int i = left_y; i < right_y; i++) {
			for (int j = left_x; j < right_x; j++) 
				matrix[j][i] = 1;
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (matrix[j][i] == 0 && visited[j][i] != 1) {
				bfs(j, i);
				bfs_count++;
			}
		}
	}
	sort(v.begin(), v.end());

	cout << bfs_count << endl;
	for (int i = 0; i < v.size(); i++)
		cout << v.at(i) << " ";
}
