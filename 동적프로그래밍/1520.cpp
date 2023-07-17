#include <iostream>

// gold 3

using namespace std;

int n, m;

int dp[501][501] = { 0, };
int value[501][501] = { 0, };
bool judge[501][501] = { 0, };


int dfs(int x, int y) {
	if (x == n && y == m) return 1;
	if (judge[x][y]) return dp[x][y];
	int cnt = 0;
	if (value[x - 1][y] < value[x][y] && x-1 >0) {
		cnt += dfs(x - 1, y);
	}
	if (value[x][y - 1] < value[x][y] && y-1 > 0) {
		cnt += dfs(x, y - 1);
	}
	if (value[x + 1][y] < value[x][y] && x+1 <=n) {
		cnt += dfs(x + 1, y);
	}
	if (value[x][y + 1] < value[x][y] && y+1 <=m) {
		cnt += dfs(x, y + 1);
	}
	judge[x][y] = true;
	dp[x][y] = cnt;
	return dp[x][y];

}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> value[i][j];
		}
	}
	cout << dfs(1, 1);

}
