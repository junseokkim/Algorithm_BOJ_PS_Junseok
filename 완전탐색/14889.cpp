#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

// 14889번 스타트와 링크 - Silver 2

int n;
int info[21][21] = { };
int start[21] = { 0, };
int s = 0, l = 0;
int result = 99999999;

void solve(int cur, int cnt) {
	// 탈출조건
	if (cnt == n / 2) {
		s = 0, l = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (start[i] == 1 && start[j] == 1) {
					s += info[i][j];
				}
				else if (start[i] == 0 && start[j] == 0) {
					l += info[i][j];
				}
			}
		}
		int tmp = abs(s - l);
		if (result > tmp) result = tmp;
		return;
	}
	for (int i = cur; i < n; i++) {
		start[i] = 1;
		solve(i + 1, cnt + 1);
		start[i] = 0;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> info[i][j];
		}
	}

	// 한 팀에 들어가는 인원은 n / 2이다.
	solve(0, 0);

	cout << result;
}