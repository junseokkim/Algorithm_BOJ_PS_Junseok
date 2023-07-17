#include <iostream>
#include <queue>

using namespace std;

// 11286¹ø Àý´ñ°ª Èü - Silver 1

struct cmp {
	bool operator() (int a, int b) {
		int aa = a >= 0 ? a : a * -1;
		int bb = b >= 0 ? b : b * -1;
		if (aa == bb) {
			return a > b;
		}
		return aa > bb;
	}
};



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	priority_queue<int, vector<int>, cmp> heap;

	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == 0) {
			if (heap.empty()) cout << "0\n";
			else {
				int tmp = heap.top();
				heap.pop();
				cout << tmp << "\n";
			}
		}
		else {
			heap.push(input);
		}
	}
}