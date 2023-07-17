#include <iostream>

// silver 2

using namespace std;

long long dp[1001] = { 0, };
long long value[1001] = { 0, };

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> value[i];
	}
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		long long cnt = 1;
		for (int j = i - 1; j > 0; j--) {
			if (value[i] < value[j]) {
				if (cnt < dp[j] + 1) {
					cnt = dp[j] + 1;
				}
			}
		}
		dp[i] = cnt;
	}
	long long max = dp[1];
	for (int i = 2; i <= n; i++) {
		if (max < dp[i]) {
			max = dp[i];
		}
	}
	cout << max;
}