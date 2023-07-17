#include <iostream>

// 1,2,3 ´õÇÏ±â
using namespace std;

int n;
int cnt = 0;

void find(int a) {
	if (a == 0) cnt++;
	else {
		if (a == 1) {
			find(a - 1);
		}
		if (a == 2) {
			find(a - 1);
			find(a - 2);
		}
		if (a >= 3) {
			find(a - 1);
			find(a - 2);
			find(a - 3);
		}
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cnt = 0;
		cin >> n;
		find(n);
		cout << cnt << endl;
	}
}