#include <iostream>

// silver 1

using namespace std;

int dp[2][100001] = { 0, };
int score[2][100001] = { 0, };

int n;

int bigger(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				cin >> score[i][j];
			}
		}

		dp[0][0] = score[0][0];
		dp[1][0] = score[1][0];
		dp[0][1] = dp[1][0] + score[0][1];
		dp[1][1] = dp[0][0] + score[1][1];
		for (int j = 2; j < n + 1; j++) {
			dp[0][j] = bigger(dp[1][j - 1] + score[0][j], dp[1][j - 2] + score[0][j]);
			dp[1][j] = bigger(dp[0][j - 1] + score[1][j], dp[0][j - 2] + score[1][j]);
		}
		cout << bigger(dp[0][n - 1], dp[1][n - 1]) << endl;
	}
}



/*
long long dp[100001] = { 0, };

int score[2][100001] = { 0, };

int n;

// 0 : 위 / 1 : 아래 / 2 : 둘 다
int check[100001] = { 0, };

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int r = 0; r < 2; r++) {
			for (int c = 1; c < n + 1; c++) {
				cin >> score[r][c];
			}
		}
		check[0] = 2;
		// dp 구하기
		if (score[0][1] > score[1][1]) {
			dp[1] = score[0][1];
			check[1] = 0;
		}
		else if(score[0][1] < score[1][1]) {
			dp[1] = score[1][1];
			check[1] = 1;
		}
		else {
			dp[1] = score[1][1];
			check[1] = 2;
		}
		
		for (int j = 2; j < n + 1; j++) {
			long long tmp1, tmp2;
			int jg1, jg2;
			if(check[j-1] == 0) {
				tmp1 = dp[j - 1] + score[1][j];
				jg1 = 1;
			}
			else if (check[j - 1] == 1) {
				tmp1 = dp[j - 1] + score[0][j];
				jg1 = 0;
			}
			else {
				if (score[0][j] > score[1][j]) {
					tmp1 = dp[j - 1] + score[0][j];
					jg1 = 0;
				}
				else if (score[1][j] > score[0][j]) {
					tmp1 = dp[j - 1] + score[1][j];
					jg1 = 1;
				}
				else {
					tmp1 = dp[j - 1] + score[1][j];
					jg1 = 2;
				}
			}
			if (check[j - 2] == 0) {
				tmp2 = dp[j - 2] + score[1][j];
				jg2 = 1;
			}
			else if (check[j - 2] == 1) {
				tmp2 = dp[j - 2] + score[0][j];
				jg2 = 0;
			}
			else {
				int a = score[0][j - 1] + score[1][j];
				int b = score[1][j - 1] + score[0][j];
				if (a > b) {
					tmp2 = dp[j - 2] + a;
					jg2 = 1;
				}
				else if (a < b) {
					tmp2 = dp[j - 2] + b;
					jg2 = 0;
				}
				else {
					tmp2 = dp[j - 2] + a;
					jg2 = 2;
				}

			}
			if (tmp1 > tmp2) {
				dp[j] = tmp1;
				check[j] = jg1;
			}
			else  if(tmp1 < tmp2 ) {
				dp[j] = tmp2;
				check[j] = jg2;
			} 
			else {
				if ((jg1 == 0 && jg2 == 0) || (jg1 == 1 && jg2 == 1)) {
					dp[j] = tmp1;
					check[j] = jg1;
				}
				else {
					dp[j] = tmp1;
					check[j] = 2;
				}
			}
		}
		cout << dp[n] << endl;
	}
}
*/