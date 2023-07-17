#include <iostream>
#include <string>
#include <stack>
// ¼è¸·´ë±â(Silver 2)

using namespace std;

int result = 0;
int cnt = 0;

int main() {
	string a;
	cin >> a;
	
	stack<char> s;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == ')') {
			if (a[i - 1] == '(') {
				result += cnt;
			}
			else {
				result++;
				cnt--;
			}
		}
		else {
			if (a[i + 1] == '(') {
				cnt++;
			}
		}
	}
	cout << result;
}