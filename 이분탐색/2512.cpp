#include <iostream>
#include <vector>
using namespace std;

// 2512번 예산 - Silver3

vector<int> input;
long long result = 0;
int output = 0;
long long m;

void solve(int l, int r) {
	long long sum = 0;
	int middle = (r + l) / 2;
	bool check = false;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] > middle) {
			sum += middle;
			check = true;
		}
		else sum += input[i];
	}
	if (l >= r) {
		if (sum <= m && sum >= result) {
			result = sum;
			output = r;
		}
		return;
	}

	if (sum <= m) {
		if (sum >= result) {
			result = sum;
			output = middle;
		}
		if (check) solve(middle + 1, r);
		else solve(l, middle - 1);
	}
	else {
		solve(l, middle - 1);
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	// 입력
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		input.push_back(tmp);
	}
	cin >> m;
	solve(0, m);
	cout << output;
}