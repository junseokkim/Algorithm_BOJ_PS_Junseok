#include <iostream>
#include <stack>
#include <string>

using namespace std;

// 9012¹ø °ýÈ£ - Silver 4

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string input;
		stack<char> s;
		cin >> input;
		bool judge = true;
		for (int j = 0; j < input.size(); j++) {
			if (input[j] == '(') {
				s.push(input[j]);
			}
			else {
				if (s.empty()) {
					judge = false;
					break;
				}
				else {
					s.pop();
				}
			}
		}
		if (judge && s.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}