#include <iostream>

// µ¿Àü 1(°ñ5)

using namespace std;


int n, k;
int value[101] = { 0, };
long long dp[10002] = { 0, };

long long findBig(long long a, long long b) {
	if (a >= b)return a;
	else return b;
}
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> value[i];
	}
	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = value[i]; j < k + 1; j++) {
			dp[j] += dp[j - value[i]];
		}
	}

	cout << dp[k];
}