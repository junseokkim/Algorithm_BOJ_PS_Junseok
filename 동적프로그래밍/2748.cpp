#include <iostream>

// 피보나치 수 2

using namespace std;

long long fib[91] = { 0, };
int main() {
	int n;
	cin >> n;
	fib[1] = 1;
	for (int i = 2; i <= n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << fib[n];
}