#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> arr;

int main() {
	int N;
	cin >> N;
	int Inputarr[100000];

	for (int i = 0; i < N; i++) {
		cin >> Inputarr[i];
	}

	for (int i = 0; i < N; i++) {
		arr.push_back(Inputarr[i]);
	}
	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()),arr.end());

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
}
