#include <iostream>
#include <stack>

// 오등큰수(Gold 3)

using namespace std;

int a[1000001] = { 0, };
int odg[1000001] = { 0, };
int f[1000001] = { 0, };
stack<int> s;


int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		f[a[i]]++;
	}

	for (int i = 1; i <= n; i++) {
		while (!s.empty() && f[a[s.top()]] < f[a[i]]) {
			odg[s.top()] = a[i];
			s.pop();
		}
		s.push(i);
	}

	for (int i = 1; i <= n; i++) {
		if (odg[i] == 0)	cout << "-1 ";
		else cout << odg[i] << " ";
	}
}