#include <iostream>

// 막대기(실5)

using namespace std;

int main()
{
	int min = 64;
	int sum = 0;
	int x;
	int cnt = 0;
	cin >> x;
	if (x != 64) {
		while (x > sum) {
			int half = min / 2;
			if (half + sum <= x) {
				sum += half;
				cnt++;
			}
			min = half;
		}
	}
	if (x == 64) cnt++;
	cout << cnt << endl;
}