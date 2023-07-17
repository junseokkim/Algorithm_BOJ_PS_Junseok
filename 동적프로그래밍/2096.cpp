#include <iostream>

// gold 5

using namespace std;

int dp[3] = { 0, };
int value[3][100001] = { 0, };

int MAX(int a, int b) {
	if (a > b)return a;
	else return b;
}

int MIN(int a, int b) {
	if (a > b)return b;
	else return a;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value[0][i] >> value[1][i] >> value[2][i];
	}
	dp[0] = value[0][0];
	dp[1] = value[1][0];
	dp[2] = value[2][0];
	for (int i = 1; i < n; i++) {
		int a = MAX(dp[0], dp[1]) + value[0][i];
		int b = MAX(MAX(dp[0], dp[1]), dp[2]) + value[1][i];
		int c = MAX(dp[1], dp[2]) + value[2][i];
		dp[0] = a;
		dp[1] = b;
		dp[2] = c;
	}
	cout << MAX(MAX(dp[0], dp[1]), dp[2]) << " ";
	dp[0] = value[0][0];
	dp[1] = value[1][0];
	dp[2] = value[2][0];
	for (int i = 1; i < n; i++) {
		int a = MIN(dp[0], dp[1]) + value[0][i];
		int b = MIN(MIN(dp[0], dp[1]), dp[2]) + value[1][i];
		int c = MIN(dp[1], dp[2]) + value[2][i];
		dp[0] = a;
		dp[1] = b;
		dp[2] = c;
	}
	cout << MIN(MIN(dp[0], dp[1]), dp[2]);

}