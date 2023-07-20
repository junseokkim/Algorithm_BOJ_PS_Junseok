#include <iostream>
#include <vector>
using namespace std;

// 6236번 용돈 관리 - Silver2
int n, m;
vector<int> input;
int output = 2147483647;

void solve(int l, int r) {
	int middle = (l + r) / 2;
	int cnt = 1;
	int remain = middle;
	bool judge = false;

	for (int i : input) {
		if (middle < i) {
			judge = true;
			break;
		}
		if (remain < i) {
			remain = middle;
			cnt++;
		}
		remain -= i;
	}
	// 탈출 조건
	if (l >= r) {
		if (cnt <= m && !judge)
			if (output >= middle) output = middle;
		return;
	}
	// 이용할 금액이 인출금액보다 클 경우
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
	int sum = 0;

	// 입력
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		input.push_back(tmp);
		sum += tmp;
	}

	solve(0, 1000000000);

	cout << output;

}