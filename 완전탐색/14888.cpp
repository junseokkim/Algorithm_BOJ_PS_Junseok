#include <iostream>

using namespace std;

// 14888번 연산자 끼워넣기 - Silver 1

int n;
int num[11] = {};
int oper[4] = { 0, };
int result = 0;
int maxValue = -1000000000;
int minValue = 1000000000;

void solve(int cur, int cnt) {
	// 탈출 조건
	if (cnt == n - 1) {
		if (maxValue < result) maxValue = result;
		if (minValue > result) minValue = result;
		return;
	}

	if (oper[0] != 0) {
		result += num[cur];
		oper[0]--;
		solve(cur + 1, cnt + 1);
		result -= num[cur];
		oper[0]++;
	}
	if (oper[1] != 0) {
		result -= num[cur];
		oper[1]--;
		solve(cur + 1, cnt + 1);
		result += num[cur];
		oper[1]++;
	}
	if (oper[2] != 0) {
		int tmp = result;
		result *= num[cur];
		oper[2]--;
		solve(cur + 1, cnt + 1);
		result = tmp;
		oper[2]++;
	}
	if (oper[3] != 0) {
		int tmp = result;
		result /= num[cur];
		oper[3]--;
		solve(cur + 1, cnt + 1);
		result = tmp;
		oper[3]++;

	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> num[i];
	for (int i = 0; i < 4; i++) cin >> oper[i];
	
	result += num[0];

	solve(1, 0);

	cout << maxValue << "\n" << minValue;
}