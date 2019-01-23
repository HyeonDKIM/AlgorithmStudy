#include <iostream>
#include <queue>
using namespace std;

//7576번 토마토

int M, N;
int box[1000][1000];
int x_dir[4] = { -1,1,0,0 };
int y_dir[4] = { 0,0,-1,1 };
int once_bfs, next_bfs;

queue<pair<int, int> > q;

void bfs(int y, int x) {

	for (int i = 0; i < 4; i++) {
		int next_x = x + x_dir[i];
		int next_y = y + y_dir[i];
		if (next_x<0 || next_y<0 || next_x>= M || next_y>= N)
			continue;
		if (box[next_y][next_x] == 0) { //안익으면
			box[next_y][next_x] = 1;//익도록
			next_bfs++;
			q.push(make_pair(next_y, next_x)); //연결
		}
	}
}

int main() {
	cin >> M >> N;
	int days = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> box[i][j];
			if (box[i][j] == 1)
				q.push(make_pair(i, j));
		}
	}

	once_bfs = q.size(); //한번 bfs하는데 몇개가 동시에 진행되는가
	next_bfs = 0; //그 다음은 몇개?

	while (!q.empty()) {
		int firstx = q.front().first;
		int firsty = q.front().second;
		bfs(firstx, firsty);
		once_bfs--;

		//첫날 연산 다 끝난 후

		if (once_bfs == 0) {
			once_bfs = next_bfs; //다음날 연산 할당
			next_bfs = 0;
			days++;
		}
		q.pop(); // 처리 끝나면 빼기
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (box[i][j] == 0)
				days = 0;
		}
	}
	/*
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << box[i][j] << " ";
		}
		cout << endl;
	}
	*/
	cout << days - 1 << "\n";
}
