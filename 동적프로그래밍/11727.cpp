#include <iostream>

// 2 * n 타일링 2(실3)

using namespace std;

int arr[1001] = { 0, };

int main() {
	int n;
	cin >> n;
	arr[1] = 1;
	arr[2] = 3;
	for (int i = 3; i < n + 1; i++) {
		arr[i] = (arr[i - 1] + 2 * arr[i - 2]) % 10007;
	}
	cout << arr[n];
}