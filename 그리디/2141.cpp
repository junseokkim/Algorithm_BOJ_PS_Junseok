#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 2141번 우체국 - Gold 4

vector<pair<int, int>> input;
vector<long long> sum;
int n;

void solve(int l, int r, int pos) {
	if (l > r) {
		cout << pos;
		return;
	}
	int m = (l + r) / 2;
	long long lsum = sum[m];
	long long rsum = sum[n - 1] - sum[m];
	if (lsum >= rsum) {
		pos = min(pos, input[m].first);
		solve(l, m - 1, pos);
	}
	else solve(m + 1, r, pos);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, a;
		cin >> x >> a;
		input.push_back({ x,a });
	}
	sort(input.begin(), input.end());
	sum.push_back(input[0].second);
	for (int i = 1; i < n; i++) {
		long long tmp = sum[i - 1] + input[i].second;
		sum.push_back(tmp);
	}

	solve(0, n - 1, 2147483647);
	
}