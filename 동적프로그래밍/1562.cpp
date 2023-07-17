#include <iostream>

// gold 1
 
using namespace std;

long long dp[101][10] = {0,};

long long max(long long a, long long b) {
	if (a > b)return a;
	else return b;
}

int main() {
	int n;
	cin >> n;
	dp[10][9] = 1;
	for (int i = 11; i <= n; i++) {
		for (int j = 1; j <= 9; j++) {
			dp[i][j] = dp[i - 1][j] + 2;
			if (j == 1) dp[i][j]--;
			if()
		}
	}
}