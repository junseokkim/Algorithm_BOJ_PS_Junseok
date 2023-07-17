#include <iostream>
#include <string>
// 문자열 분석(Bronze 2)

using namespace std;

int main() {

	for (int i = 0; i < 100; i++) {
		string a;
		int cnt[4] = { 0, };
		getline(cin, a);
		if (a[0] == 0) break;
		for (int j = 0; j < a.size(); j++) {
			if (a[j] == ' ') {
				cnt[3]++;
			}
			else if (a[j] >= 97) {
				cnt[0]++;
			}
			else if (a[j] >= 65) {
				cnt[1]++;
			}
			else {
				cnt[2]++;
			}
		}
		for (int j = 0; j < 4; j++) {
			cout << cnt[j] << " ";
		}
		cout << "\n";
	}
}