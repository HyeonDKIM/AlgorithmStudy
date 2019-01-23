//#pragma warning (disable:4996)
#include <iostream>
#include <queue>
using namespace std;

//6603번 로또

int k=1;
int S[13];
int visited[13];

void dfs(int start, int selectNum) {
	if (selectNum == 6) {
		for (int i = 0; i < 6; i++) {
			cout << visited[i] << " ";
		}
			cout << endl;
	}
	for (int i = start; i < k; i++) {
		visited[selectNum] = S[i];
		dfs(i + 1, selectNum + 1);
	}
}

int main() {

	while (k != 0) {
		cin >> k;
		if (k == 0)
			break;
		for (int i = 0; i < k; i++)
			cin >> S[i];
		dfs(0, 0);
		cout << endl;
	}
}
