#include <iostream>
#include <vector>

using namespace std;

// 11501╧Ь аж╫д - Silver 2

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector<int> input;
		for (int j = 0; j < n; j++) {
			int tmp;
			cin >> tmp;
			input.push_back(tmp);
		}
		long long result = 0;
		int maxValue = 0;
		for (int j = n - 1; j >= 0; j--) {
			if (input[j] > maxValue) maxValue = input[j];
			else {
				result += (maxValue - input[j]);
			}
		}
		cout << result << "\n";
	}
}