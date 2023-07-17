#include <iostream>

// 이친수(실3)

using namespace std;;

long long arr[91] = { 0, };
int main() {
	int n;
	cin >> n;
	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3; i < n  +1; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[n];
}