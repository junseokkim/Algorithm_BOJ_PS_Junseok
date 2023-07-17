#include <iostream>
#include <cmath>

// 골드바흐의 추측(Silver 1)

using namespace std;

// 0이면 소수, 1이면 소수 아님
int primeNum[1000001] = { 0, };

// 소수임을 판별하는 함수
void isPrime(int n) {
	for (int i = 2; i <= n; i++) {
		if (primeNum[i] == 0) {
			for (int j = i * 2; j <= n; j += i) {
				primeNum[j] = 1;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int a, b;
	primeNum[1] = 1;
	isPrime(1000000);
	while (1) {
		cin >> n;
		if (n == 0) break;
		a = 2;
		bool judge = false;
		for (; a <= n / 2 + 1; a++) {
			b = n - a;
			if (primeNum[a] == 0 && primeNum[b] == 0) {
				judge = true;
				break;
			}
		}
		if (judge) cout << n << " = " << a << " + " << b << "\n";
		else cout << "Goldbach's conjecture is wrong." << "\n";
		
	}
	return 0;
}