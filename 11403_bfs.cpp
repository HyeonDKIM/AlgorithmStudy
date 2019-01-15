#include <iostream>
#include <queue>
using namespace std;

//11403번 경로 찾기

int matrix[101][101];
int print[101][101];
int visit[101];
int N;

void bfs(int start) {
	queue<int> q;
	q.push(start);
	
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		//cout << x+1 << " ";

		for (int i = 0; i < N; i++) {
			if (matrix[x][i] == 1 && visit[i] != 1) {
				q.push(i);
				visit[i] = 1;
				print[start][i] = 1;
			}
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
		bfs(i);
		for (int j = 0; j < N; j++)
			visit[j] = 0;
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
