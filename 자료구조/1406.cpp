#include <iostream>
#include <string>
#include <list>

// 에디터(Silver 2)

// list 사용법 숙지 필요

using namespace std;

string input;
list<char> ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> input;
	for (char tmp : input) ll.push_back(tmp);
	int n;
	cin >> n;
	list<char>::iterator t = ll.end();
	for (int i = 0; i < n; i++) {
		char a;
		cin >> a;
		if (a == 'L') {
			if (t != ll.begin()) t--;
		}
		else if (a == 'D') {
			if (t != ll.end()) t++;
		}
		else if (a == 'B') {
			list<char>::iterator tmp = t;
			if (t != ll.begin()) {
				ll.erase(--t);
			}
			t = tmp;
		}
		else {
			char b;
			cin >> b;
			ll.insert(t, b);
		}
	}
	for (char tmp : ll) cout << tmp;
}