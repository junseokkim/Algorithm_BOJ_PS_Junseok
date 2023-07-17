#include <iostream>

// º¸¹°(½Ç4)
using namespace std;

int  n;
int a[51] = { 0, };
int b[51] = { 0, };

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
			if (b[i] < b[j]) {
				swap(b[i], b[j]);
			}
		}
	}
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += a[i] * b[i];
	}
	cout << s;
}