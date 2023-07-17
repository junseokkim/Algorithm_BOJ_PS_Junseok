#include <iostream>

// silver 1

using namespace std;

int n;
long long dp[101][101] = { 0, };
int value[101][101] = { 0, };

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> value[i][j];
		}
	}
	dp[1][1] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (dp[i][j] == 0 || (i == n && j == n)) continue;
			if (i + value[i][j] <= n) dp[i + value[i][j]][j] += dp[i][j];
			if (j + value[i][j] <= n) dp[i][j + value[i][j]] += dp[i][j];
		}
	}
	cout << dp[n][n];
}