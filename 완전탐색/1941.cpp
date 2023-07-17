#include <iostream>

using namespace std;

// 1941번 소문난 칠공주 - Gold 3

char seat[5][5];
int result = 0;
int ycnt = 0;
int scnt = 0;

void solve(int i, int j, int cnt) {
	// 탈출 조건
	if (cnt == 7) {
		result++;
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> seat[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			solve(i, j, 0);
		}
	}


}