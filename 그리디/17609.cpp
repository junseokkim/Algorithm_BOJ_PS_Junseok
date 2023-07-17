#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 17609¹ø È¸¹® - Gold 5

string input;

int solve(int l, int r, int check) {
	if (check == 2) return 2;
	if (l >= r) {
		return check;
	}

	if (input[l] == input[r]) return solve(l + 1, r - 1, check);
	else {
		int a = solve(l + 1, r, check + 1);
		int b = solve(l, r - 1, check + 1);
		return a > b ? b : a;
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> input;

		cout << solve(0, input.size() - 1, 0) << "\n";
	}
}