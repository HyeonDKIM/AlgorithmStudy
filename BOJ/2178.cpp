#include <iostream>
#include <queue>
using namespace std;

//2178번 미로 탐색

int N, M; //N가로M세로
queue<pair<int, int> > q;
char tmpmaze[100][100];
int maze[100][100];

int x_dir[4] = { -1,1,0,0 }; //x축 진행방향
int y_dir[4] = { 0,0,-1,1 }; //y축 진행방향


void bfs(int x, int y) {

	q.push(make_pair(x, y));

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_x = x + x_dir[i];
			int next_y = y + y_dir[i];
			if (next_x<0 || next_y<0 || next_x>N - 1 || next_y>M - 1) //진행불가 판단
				continue;
			if (maze[next_x][next_y] == 1) { //진행 가능일때
				q.push(make_pair(next_x, next_y)); //연결
				maze[next_x][next_y] = maze[x][y] + 1;
			}
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> tmpmaze[i]; //미로 생성
		for (int j = 0; j < M; j++) {
			maze[i][j] = int(tmpmaze[i][j]) - 48;
		}
	} //char -> int

	maze[0][0] = 2;
	bfs(0, 0);
	int answer = maze[N - 1][M - 1] - 1;

	cout << answer << endl;
}
