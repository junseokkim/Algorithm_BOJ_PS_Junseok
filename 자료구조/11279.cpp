#include <iostream>
#include <queue>

using namespace std;

// 11279¹ø ÃÖ´ë Èü - Silver 2

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	priority_queue<int> maxHeap;
	int input;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == 0) {
			if (maxHeap.empty()) cout << "0\n";
			else {
				int result = maxHeap.top();
				maxHeap.pop();
				cout << result << "\n";
			}
		}
		else {
			maxHeap.push(input);
		}
	}
}