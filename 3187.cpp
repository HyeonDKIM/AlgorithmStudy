#include <iostream>
#include <queue>
using namespace std;

//3187번 양치기 꿍

char arr[251][251] = { 0, };
int visited[251][251] = { 0, };

int R, C;
int x_dir[] = { 1,-1,0,0 };
int y_dir[] = { 0,0,1,-1 };
int vcount = 0;
int kcount = 0;


void dfs(int y, int x) {
	visited[y][x] = 1;

	if (arr[y][x] == 'v')
		vcount++;
	else if (arr[y][x] == 'k')
		kcount++;

		for (int i = 0; i < 4; i++) {
			int next_y = y + y_dir[i];
			int next_x = x + x_dir[i];

			if (next_y < 0 || next_x < 0 || next_y >= R || next_x >= C)
				continue;
			
			if (arr[next_y][next_x] != '#'&&visited[next_y][next_x] != 1) {
				dfs(next_y, next_x);
			}
		}
	}

int main() {
	int v_alive = 0;
	int k_alive = 0;

	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			vcount = 0;
			kcount = 0;

			if (arr[i][j] != '#'&&visited[i][j] != 1) {
				dfs(i, j);

				if (vcount != 0 || kcount != 0) {
					if (vcount >= kcount)
						v_alive += vcount;
					else
						k_alive += kcount;
				}
			}
		}
	}

	cout << k_alive << " " << v_alive;
}
