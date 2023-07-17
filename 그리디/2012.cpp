#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 2012�� ����ű�� - Silver 3

vector<int> rr;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	// �־��� ��� (499,999 * 500,000) / 2�̹Ƿ� long long Ÿ������ ����
	long long result = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		rr.push_back(tmp);
	}
	// ����
	sort(rr.begin(), rr.end());

	for (int i = 0; i < n; i++) {
		result += abs(rr[i] - (i + 1));
	}

	cout << result;
}
/*
vector<int> rr;
bool check[500001] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	long long result = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		rr.push_back(tmp);
	}
	sort(rr.begin(), rr.end());
	for (int i = 0; i < n; i++) {
		if (!check[rr[i]]) check[rr[i]] = true;
		else {
			int up = rr[i] + 1;
			int cnt = 1;
			while (1) {
				if (up <= n) {
					if (!check[up]) {
						check[up] = true;
						break;
					}
				}
				up++, cnt++;
			}
			result += cnt;
		}
	}
	cout << result;
}
*/