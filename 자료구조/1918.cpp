#include <iostream>
#include <string>
#include <stack>

// 후위 표기식(Gold 2)

using namespace std;

string a;
stack<char> oper;

int main() {
	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= 65 && a[i] <= 90) {
			cout << a[i];
		}
		else {
			if (a[i] == '(') {
				oper.push(a[i]);
			}
			else if (a[i] == ')') {
				while (oper.top() != '(' && !oper.empty()) {
					cout << oper.top();
					oper.pop();
				}
				oper.pop();
			}
			else if (a[i] == '*' || a[i] == '/') {
				while (!oper.empty() && (oper.top() == '*' || oper.top() == '/')) {
					cout << oper.top();
					oper.pop();
				}
				oper.push(a[i]);
			}
			else if( a[i] == '+' || a[i] == '-'){
				while(!oper.empty() && oper.top() != '(') {
					cout << oper.top();
					oper.pop();
				}
				oper.push(a[i]);
			}
		}
	}
	while (!oper.empty()) {
		cout << oper.top();
		oper.pop();
	}
	return 0;
}