#include <iostream>	

using namespace std;

// GCD гу(Silver 4)

long long arr[101] = { 0, };
long long sum = 0;
int findGCD(int a, int b) {
	int gcd = a > b ? b : a;
	for (int i = gcd; i > 0; i--) {
		if (a % i == 0 && b % i == 0) return i;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		for (int j = 0; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum += findGCD(arr[j], arr[k]);
			}
		}
		cout << sum << "\n";
		sum = 0;
	}
}