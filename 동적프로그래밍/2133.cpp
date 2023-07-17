#include <iostream>

// gold 4

using namespace std;

int dp[31] = { 0, };

int main() {
	int n;
	cin >> n;
	dp[1] = 0;
	dp[2] = 3;
	for (int i = 3; i <= n; i++) {
		if (i % 2 == 0) {
			dp[i] += 2;
		}
		for (int j = 2; i - j > 0; j += 2) {
			dp[i] += dp[i - j] * 2;
		}
		dp[i] += dp[i - 2];
	}
	cout << dp[n];
	
}