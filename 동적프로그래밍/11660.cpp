#include <iostream>

// silver 1

using namespace std;

int table[1025][1025] = { 0, };
int dp[1025][1025] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i < n + 1; i++) {
		int tmp = 0;
		for (int j = 1; j < n + 1; j++) {
			cin >> table[i][j];
			tmp += table[i][j];
			dp[i][j] = tmp + dp[i - 1][j];
		}
	}
	int x1, x2, y1, y2;
	int result;
	for (int i = 0; i < m; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		result = dp[x2][y2] - dp[x2][y1 - 1] - dp[x1 - 1][y2] + dp[x1 - 1][y1 - 1];
		cout << result << "\n";
	}
	return 0;
}