#include <iostream>
using namespace std;

//11403번 경로 찾기

int matrix[101][101];
int print[101][101];
int visit[101];
int N;

void dfs(int start) {
	for (int i = 0; i < N; i++) {
		if (matrix[start][i] == 1 && visit[i] != 1) {
			visit[i] = 1;
			dfs(i);
		}
	}
}

int main() {

	cin >> N;

	//행렬 입력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			visit[j] = 0;
		dfs(i);
		for (int j = 0; j < N; j++) {
			if (visit[j] == 1)
				print[i][j] = 1;
		}
	}

	//테스트---------------------------------

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << print[i][j] << " ";
		}
		cout << endl;
	}
	
	//----------------------------------------
}
