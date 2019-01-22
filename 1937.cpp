//#pragma warning (disable:4996)
#include <iostream>
#include <algorithm>
using namespace std;

//1937번 욕심쟁이 판다

int bamboo[501][501];
int dp[501][501];
int N;

int x_dir[] = { 1,-1,0,0 };
int y_dir[] = { 0,0,1,-1 };

int dfs(int x, int y) {
	if (dp[x][y])
		return dp[x][y];
	dp[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int next_x = x + x_dir[i];
		int next_y = y + y_dir[i];

		if (bamboo[next_x][next_y] > bamboo[x][y]) {
			dp[x][y] = max(dp[x][y], dfs(next_x, next_y) + 1);
		}
	}
	return dp[x][y];
}

int main() {
	scanf("%d", &N);
	int print = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			scanf("%d", &bamboo[i][j]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			print = max(print, dfs(i, j));
		}
	}
	printf("%d", print);
}
