#include <iostream>
#include <string>
#include <regex> // ����ǥ���� ����� ����
using namespace std;

// 2671�� ����Խĺ� - Gold 5

/* ��� 1
string input;

bool identify() {
	int pos = 0;
	int n = input.length();
	while (pos < n) {
		// (100~1~)������ ���
		if (input[pos] == '1') {
			// 0�� ���� �Ǻ��� ����
			int cnt = 0;
			pos++;
			while (pos < n) {
				if (input[pos] == '1') break;
				else {
					cnt++;
					pos++;
				}
			}

			// �ݺ������� if���� ��ġ�� �ʾ��� ��� -> 0���� ���� ���
			// �Ǵ� 0�� �� ���̻� �������� �ʾ��� ��� -> 100~���°� �ƴ� ���
			if (pos >= n || cnt < 2) return false;

			pos++;

			while (pos < n && input[pos] == '1') {
				// 100������ ��� �ݺ��� �ߴ�
				if (pos + 2 < n && input[pos + 1] == '0' && input[pos + 2] == '0') break;
				pos++;
			}
		}
		// (01)������ ���
		else {
			// ���� ���� ���ٸ� NOISE
			if (pos + 1 >= n) return false;
			// ���� ���� 1�� �ƴ϶�� NOISE
			if (input[pos + 1] != '1') return false;
			// (01)���¸� �����ϹǷ� �� ���������� pos�� �ٲ�
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