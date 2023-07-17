#include <iostream>
#include <vector>
using namespace std;

// 7568 µ¢Ä¡ Siver 5

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<pair<pair<int, int>, int>> input;
	for (int i = 0; i < n; i++) {
		int x, y, rank = 1;
		cin >> x >> y;
		input.push_back({ {x,y},rank });
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (input[i].first.first > input[j].first.first && input[i].first.second > input[j].first.second) {
					input[j].second++;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << input[i].second << " ";
	}
}