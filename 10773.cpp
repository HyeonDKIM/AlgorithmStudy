#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 10773번 제로

int main() {
	int K;
	cin >> K;
	vector<int> v;
	int sum = 0;

	for (int i = 0; i < K; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		
		if (v.back() == 0) {
			v.pop_back();
			v.pop_back();
		}
	}

	for (int i = 0; i < v.size(); i++)
		sum += v.at(i);

	cout << sum << endl;
}
