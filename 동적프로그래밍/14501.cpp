#include <iostream>

// Επ»η (½Η3)

using namespace std;

int n;
int t[16] = { 0, };
int p[16] = { 0, };
int value = 0;
int maxValue = 0;

void findMax(int pos) {

	for (int i = pos; i < n+1; i++) {
		if (i + t[i] < n + 1) {
			value += p[i];
			findMax(i + t[i]);
			value -= p[i];
		}
		else {
			if (i + t[i] == n + 1) value += p[i];
			if (maxValue < value) {
				maxValue = value;
			}
			if (i + t[i] == n + 1) value -= p[i];

		}
	}
}


int main() {
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		cin >> t[i] >> p[i];
	}
	findMax(1);
	cout << maxValue;

}