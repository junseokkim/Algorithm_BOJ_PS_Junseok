#include <iostream>

// silver 2

using namespace std;

int dp[1001][1001] = { 0, };
int value[1001][1001] = { 0, };

int MAX(int a, int b, int c) {
	if (a > b) {
		if (a > c) return a;
		else return c;
	}
	else {
		if (b > c) return b;
		else return c;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> value[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp[i][j] = MAX(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]);
			dp[i][j] += value[i][j];
		}
	}

	cout << dp[n][m];
}