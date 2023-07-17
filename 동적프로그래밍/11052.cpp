#include <iostream>

// 카드 구매하기(실1)
using namespace std;

int n;
int arr[1001] = { 0, };
long long maxValue[1001] = { 0, };

int main() {
	cin >> n;
	maxValue[0] = 0;
	for (int i = 1; i < n + 1; i++) {
		cin >> arr[i];
	}
	maxValue[1] = arr[1];
	long long value = 0;
	for (int i = 2; i < n + 1; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (arr[i - j] + maxValue[j] > value) {
				value = arr[i - j] + maxValue[j];
			}
		}
		maxValue[i] = value;
		value = 0;
	}
	cout << maxValue[n] << endl;
}