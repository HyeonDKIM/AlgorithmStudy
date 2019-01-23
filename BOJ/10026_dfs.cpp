#include <iostream>
#include <queue>
using namespace std;

//10026번 적록색약

char arr[100][100];
int visited[100][100];
int N;

int x_dir[] = { 1,-1,0,0 };
int y_dir[] = { 0,0,1,-1 };

void dfs(int x, int y, char c) {
	visited[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		int next_x = x + x_dir[i];
		int next_y = y + y_dir[i];
		if (next_x < 0 || next_y < 0 || next_x >= N || next_y >= N)
			continue;
		if (arr[next_x][next_y] == c && visited[next_x][next_y] != 1) {
			visited[next_x][next_y] = 1;
			dfs(next_x, next_y, c);
		}
	}
}


int main() {
	cin >> N;
	int Not_redgreenpill = 0;
	int redgreenpill = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	//적록색약이 아닐 때
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 'R'&&visited[i][j] == 0) {
				dfs(i, j, 'R');
				Not_redgreenpill++;
			}
			else if (arr[i][j] == 'G'&&visited[i][j] == 0) {
				dfs(i, j, 'G');
				Not_redgreenpill++;
			}
			else if (arr[i][j] == 'B'&&visited[i][j] == 0) {
				dfs(i, j, 'B');
				Not_redgreenpill++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			visited[i][j] = 0;
			if (arr[i][j] == 'R')
				arr[i][j] = 'G';
		}
	}

	//적록색약일 때
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 'G'&&visited[i][j] == 0) {
				dfs(i, j, 'G');
				redgreenpill++;
			}
			else if (arr[i][j] == 'B'&&visited[i][j] == 0) {
				dfs(i, j, 'B');
				redgreenpill++;
			}
		}
	}

	cout << Not_redgreenpill << " " << redgreenpill << endl;

}
