#include <iostream>
#include <string>
// silver 2
// 원리 파악이 중요

using namespace std;

int dp[100001] = {0,};

int main() {

	string  a = "";
	int n;
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		dp[i] = i;
		for (int j = 1; j * j <= i; j++) {
			if (dp[i] > dp[i - j * j] + 1) {
				dp[i] = dp[i - j * j] + 1;
			}
		}
	}
	cout << dp[n];
}