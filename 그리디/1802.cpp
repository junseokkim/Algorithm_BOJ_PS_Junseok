#include <iostream>
#include <string>
using namespace std;

// 1802번 종이 접기 - Silver 1

bool solve(string input, int first, int last) {
	if (first >= last) return true;
	int middle = (first + last) / 2;
	for (int i = 1; i <= (last - first) / 2; i++) {
		if (input[middle + i] == input[middle - i]) return false;
	}
	return (solve(input, first, middle - 1) && solve(input, middle + 1, last));

}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string input;
		cin >> input;
		if (solve(input, 0, input.size() - 1)) cout << "YES\n";
		else cout << "NO\n";
	}
}