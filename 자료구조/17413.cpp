#include <iostream>
#include <string>
#include <stack>
#include <queue>
// 단어 뒤집기 2(Silver 3)

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string a;
	stack<char> s;
	queue<char> q;
	int judge = 0;
	getline(cin, a);

	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '<') {
			judge = 1;
			while (!s.empty()) {
				cout << s.top();
				s.pop();
			}
		}
		else if (a[i] == '>') {
			judge = 0;
			cout << "<";
			while (!q.empty()) {
				cout << q.front();
				q.pop();
			}
			cout << ">";
			
		}
		else {
			if (judge == 1) {
				q.push(a[i]);
			}
			else {
				if (a[i] == ' ') {
					while (!s.empty()) {
						cout << s.top();
						s.pop();
					}
					cout << " ";
				}
				else s.push(a[i]);
			}
		}
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}