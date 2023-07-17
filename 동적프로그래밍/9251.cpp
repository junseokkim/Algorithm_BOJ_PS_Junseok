#include <iostream>
#include <string>

// LCS (골5)
// 2차원 배열로 표현해서 dp 원리 이용

using namespace std;

string a, b;
int dp[1001][1001] = { 0, };

int findBig(int m, int n) {
	if (m >= n) return m;
	else return n;
}

int main() {
	cin >> a >> b;
	for (int i = 1; i < a.size() + 1; i++) {
		for (int j = 1; j < b.size() + 1; j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else {
				dp[i][j] = findBig(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	cout << dp[a.size()][b.size()];
}

/* 시간 초과(되긴 됨)
string a, b;

int length = 0;

void findMax(int posA, int posB, int cnt) {
	if (posA == a.size() || posB == b.size()) {
		if (cnt > length) length = cnt;
		return;
	}
	for (int i = posB; i < b.size(); i++) {
		if (a[posA] == b[i]) {
			findMax(posA + 1, i + 1, cnt + 1);
		}
	}
	findMax(posA + 1, posB, cnt);
}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> a;
	cin >> b;
	findMax(0, 0, 0);
	cout << length << endl;
}
*/