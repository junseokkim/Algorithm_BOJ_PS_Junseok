#include <iostream>
#include <string>
#include <regex> // 정규표현식 사용을 위해
using namespace std;

// 2671번 잠수함식별 - Gold 5

/* 방법 1
string input;

bool identify() {
	int pos = 0;
	int n = input.length();
	while (pos < n) {
		// (100~1~)형태인 경우
		if (input[pos] == '1') {
			// 0의 개수 판별을 위해
			int cnt = 0;
			pos++;
			while (pos < n) {
				if (input[pos] == '1') break;
				else {
					cnt++;
					pos++;
				}
			}

			// 반복문에서 if문을 거치지 않았을 경우 -> 0으로 끝난 경우
			// 또는 0이 두 개이상 존재하지 않았을 경우 -> 100~형태가 아닌 경우
			if (pos >= n || cnt < 2) return false;

			pos++;

			while (pos < n && input[pos] == '1') {
				// 100형태인 경우 반복문 중단
				if (pos + 2 < n && input[pos + 1] == '0' && input[pos + 2] == '0') break;
				pos++;
			}
		}
		// (01)형태인 경우
		else {
			// 다음 값이 없다면 NOISE
			if (pos + 1 >= n) return false;
			// 다음 값이 1이 아니라면 NOISE
			if (input[pos + 1] != '1') return false;
			// (01)형태를 만족하므로 그 다음값으로 pos를 바꿈
			pos += 2;
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> input;
	if (identify()) cout << "SUBMARINE";
	else cout << "NOISE";
}
*/

int main() {
	string str;
	cin >> str;
	string match = "(100+1+|01)+";
	if (regex_match(str, regex(match))) cout << "SUBMARINE";
	else cout << "NOISE";
}