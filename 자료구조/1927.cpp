#include <iostream>
#include <queue>

using namespace std;

// 1927¹ø ÃÖ¼Ò Èü - Silver 2

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	priority_queue<int> minHeap;;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if (input == 0) {
			if (minHeap.empty()) cout << '0' << "\n";
			else {
				int result = minHeap.top();
				minHeap.pop();
				cout << result * -1 << "\n";
			}
		}
		else {
			minHeap.push(input * -1);
		}

	}
}