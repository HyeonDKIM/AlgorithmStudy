#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

//2468번 안전 영역

int N;
queue<pair<int, int> > q;
int arr[100][100];
int visited[100][100] = { 0, };
int x_dir[4] = { 1,-1,0,0 };
int y_dir[4] = { 0,0,1,-1 };

void BFS(int y, int x, int height) {
	q.push({ y,x });
	visited[y][x] = 1;

	while (!q.empty()) {
		int tmpy = q.front().first;
		int tmpx = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_y = tmpy + y_dir[i];
			int next_x = tmpx + x_dir[i];
			if (next_x < 0 || next_y < 0 || next_x >= N || next_y >= N)
				continue;
			if (arr[next_y][next_x] > height && visited[next_y][next_x] == 0) {
				visited[next_y][next_x] = 1;
				q.push({ next_y,next_x });
			}
		}
	}

}

int main() {
	int count = 0;
	int height = 0;
	int compare = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
			height = max(height, arr[i][j]); //가장높은 높이
		}
	}

	for (int a = 0; a <= height; a++) {
		count = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				visited[i][j] = 0;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (arr[i][j] > a&&visited[i][j] == 0) {
					count++;
					BFS(i, j, a);
				}
			}
		}
		compare = max(count, compare);
	}

	cout << compare << endl;
}
