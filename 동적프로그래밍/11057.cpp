#include <iostream>

// silver 1

using namespace std;

int dp[10][1001] = { 0, };

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		dp[i][1] = 1;
	}
	for (int i = 2; i < n + 1; i++) {
		for (int j = 0; j < 10; j++) {
			int sum = 0;
			for (int k = j; k >= 0; k--) {
				sum += dp[k][i - 1];
			}
			dp[j][i] = sum % 10007;
		}
	}
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += dp[i][n];
	}
	cout << sum % 10007 << endl;
}