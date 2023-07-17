#include <iostream>

// 색종이(실5)

using namespace std;

bool arr[101][101] = { 0, };

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				arr[i][j] = true;
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (arr[i][j]) cnt++;
		}
	}
	cout << cnt;
}