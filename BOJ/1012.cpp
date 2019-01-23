#include <iostream>
#include <queue>
using namespace std;

//1012번 유기농 배추

int T, N, M, K;
int field[51][51];
queue<pair<int, int> > q;

int x_dir[4] = { 1,-1,0,0 };
int y_dir[4] = { 0,0,-1,1 };


void bfs(int y, int x) {
	field[y][x] = 0;
	q.push(make_pair(y, x));

	while (!q.empty()) {
		int tmp_y = q.front().first;
		int tmp_x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_y = tmp_y + y_dir[i];
			int next_x = tmp_x + x_dir[i];

			if (tmp_x<0 || tmp_y<0 || next_x>=M || next_y>=N)
				continue;
			if (field[next_y][next_x] == 1) {
				field[next_y][next_x] = 0;
				q.push(make_pair(next_y, next_x));
			}
		}
	}
}



int main() {
	
	cin >> T;
	for (int a = 0; a < T; a++) {
		cin >> M >> N >> K;
		int worm = 0;

		//초기화
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				field[i][j] = 0;
			}
		}

		int x, y; //입력좌표

		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			field[y][x] = 1;
		}
		//테스트----------------------------------
		/*
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cout << field[i][j] << " ";
			}
			cout << endl;
		}
		*/
		//-----------------------------------------

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (field[i][j] == 1) {
					bfs(i, j);
					worm++;
				}
			}
		}
		//테스트---------------------------------------
		/*
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cout << field[i][j] << " ";
			}
			cout << endl;
		}
		*/
		//----------------------------------------------

		cout << worm << endl;
	}
}
