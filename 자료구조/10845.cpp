#include <iostream>
#include <list>

// 큐(Silver 4)

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	list<int> a;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string b;
		cin >> b;
		if (b == "push") {
			int c;
			cin >> c;
			a.push_back(c);
		}
		else if (b == "front") {
			if (a.empty()) cout << "-1" << "\n";
			else cout << a.front() << "\n";
		}
		else if (b == "back") {
			if (a.empty())cout << "-1" << "\n";
			else cout << a.back() << "\n";
		}
		else if (b == "pop") {
			if (a.empty())	cout << "-1" << "\n";
			else {
				cout << a.front() << "\n";
				a.pop_front();
			}
		}
		else if (b == "empty") {
			if (a.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
		else {
			cout << a.size() << "\n";
		}
	}
}