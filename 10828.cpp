#include <iostream>
#include <string>
#include <stack>
using namespace std;

//10828번 스택

int main() {

	int N;
	cin >> N;

	stack<int> st;
	string command;

	for (int i = 0; i < N; i++) {
		int num = 0;
		cin >> command;
		if (command == "push") {
			cin >> num;
			st.push(num);
		}
		else if (command == "top")
			if (st.empty())
				cout << -1 << endl;
			else
				cout << st.top() << endl;
		else if (command == "pop")
			if (st.empty())
				cout << -1 << endl;
			else {
				cout << st.top() << endl;
				st.pop();
			}
		else if (command == "empty")
			if (st.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		else if (command == "size")
			cout << st.size() << endl;
	}
}
