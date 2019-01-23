#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

//2667번 단지번호붙이기

char tmparr[25][25];
int arr[25][25];
int N;
queue<pair<int, int> > q;
int visited[25][25];
int x_dir[4] = { 1,0,-1,0 };
int y_dir[4] = { 0,1,0,-1 };

vector<int> v;
int house_count;

void BFS(int y, int x) {
	house_count = 1;
	q.push({ y,x });
	arr[y][x] = 0;
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
			if (arr[next_y][next_x] == 1&&visited[next_y][next_x]!=1) {
				arr[next_y][next_x] = 0;
				q.push({ next_y,next_x });
				visited[next_y][next_x] = 1;
				house_count++;
			}
		}
	}
	v.push_back(house_count);
}



int main() {
	int count = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> tmparr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = int(tmparr[i][j]) - 48;
		}
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 1) {
				BFS(i, j);
				count++;
			}
		}
	}

	sort(v.begin(), v.end());

	cout << count << endl;
	for (int i = 0; i < count; i++) {
		cout << v.at(i) << endl;
	}

	/*
	//테스트-----------------------

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	*/
}
