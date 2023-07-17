#include <iostream>
#include <vector>

using namespace std;

// 1914번 하노이 탑 - Silver 1
/*
void print(vector<pair<int, int>> results) {
	cout << results.size() << "\n";
	for (pair<int, int> result : results) {
		cout << result.first << " " << result.second << "\n";
	}
}

void hanoi(vector<pair<int,int>> before, int cnt) {
	if (cnt == 0) {
		print(before);
		return;
	}
	vector<pair<int, int>> after;
	for (pair<int, int> b : before) {
		pair<int, int> tmp;
		if (b.first == 2) tmp.first = 3;
		else if (b.first == 3) tmp.first = 2;
		else tmp.first = 1;
		if (b.second == 2) tmp.second = 3;
		else if (b.second == 3) tmp.second = 2;
		else tmp.second = 1;

		after.push_back(tmp);
	}
	after.push_back({ 1,3 });
	for (pair<int, int> b : before) {
		pair<int, int> tmp;
		if (b.first == 1) tmp.first = 2;
		else if (b.first == 2) tmp.first = 1;
		else tmp.first = 3;
		if (b.second == 1) tmp.second = 2;
		else if (b.second == 2) tmp.second = 1;
		else tmp.second = 3;

		after.push_back(tmp);
	}
	hanoi(after, cnt - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	vector<pair<int, int>> before;
	before.push_back({ 1,3 });
	int n;
	cin >> n;
	hanoi(before, n - 1);
}
*/