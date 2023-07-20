#include <iostream>
#include <vector>

using namespace std;

// 2343¹ø ±âÅ¸ ·¹½¼ - Silver 1

int n, m;
vector<int> input;
int output = 2147483647;

void solve(int l, int r) {
	int middle = (l + r) / 2;
	int remain = middle;
	int cnt = 1;
	bool judge = false;
	for (int i : input) {
		if (i > middle) {
			judge = true;
			break;
		}
		if (remain < i) {
			remain = middle;
			cnt++;
		}
		remain -= i;
	}
	if (l >= r) {
		if (cnt <= m && !judge)
			if (output >= middle) output = middle;
		return;
	}

	if (judge) {
		solve(middle + 1, r);
		return;
	}
	if (cnt <= m) {
		if (output >= middle) output = middle;
		solve(l, middle - 1);
	}
	else solve(middle + 1, r);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		input.push_back(tmp);
	}
	solve(0, 1000000000);
	cout << output;
}