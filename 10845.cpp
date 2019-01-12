#include <iostream>
#include <string>
#include <queue>
using namespace std;

//10845번 큐

int main() {

	int N;
	cin >> N;

	queue<int> q;
	string command;

	for (int i = 0; i < N; i++) {
		int num = 0;
		cin >> command;
		if (command == "push") {
			cin >> num;
			q.push(num);
		}
		else if (command == "front")
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		else if (command == "back")
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		else if (command == "pop")
			if (q.empty())
				cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		else if (command == "empty")
			if (q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		else if (command == "size")
			cout << q.size() << endl;
	}
}
