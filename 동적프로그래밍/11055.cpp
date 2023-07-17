#include <iostream>

// silver 2

using namespace std;

int dp[1001] = {0,};
int l[1001] = { 0, };

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		cin >> l[i];
	}
	dp[1] = l[1];
	for (int i = 2; i < n + 1; i++) {
		int max = 0;
		for (int j = 1; j <i; j++) {
			if (l[j] < l[i]) {
				if (max < dp[j]) max = dp[j];
			}
		}
		dp[i] = max + l[i];
	}
	int max = 0;
	for (int i = 1; i < n + 1; i++) {
		if (max < dp[i]) max = dp[i];
	}
	cout << max;
}