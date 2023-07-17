#include <iostream>
#include <string>

using namespace std;

// 1436 ¿µÈ­°¨µ¶ ¼ò Siver 5

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int end = 666;
	int cnt = 0;
	string find;
	while (1) {
		find = to_string(end);
		for (int i = 0; i < find.length() - 2; i++) {
			if (find[i] == '6' && find[i + 1] == '6' && find[i + 2] == '6') {
				cnt++;
				if (cnt == n) {
					cout << find;
					return 0;
				}
				break;
			}
		}
		end++;
	}
}