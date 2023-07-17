#include <iostream>

// µ¿Àü 2

using namespace std;

long long dp[10001] = { 0, };
long long coin[101] = { 0, };

long long MIN(long long a, long long b) {
	if (a > b)return b;
	else return a;
}
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}
	for (int i = 1; i <= k; i++) {
		dp[i] = 10001;
	}
	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			dp[j] = MIN(dp[j], dp[j - coin[i]] + 1);
		}
	}
	if (dp[k] == 10001) cout << -1;
	else cout << dp[k];
}