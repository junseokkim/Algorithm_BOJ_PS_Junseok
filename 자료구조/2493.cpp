#include <iostream>
#include <stack>

using namespace std;

// 2493�� ž (gold 5)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	// ž ��ȣ�� ���̸� �������ִ� stack
	stack<pair<int, int>> s;
	int input;
	
	// ž�� ���� �ޱ�
	for (int i = 1; i <= n; i++) {
		cin >> input;
		// stack�� ����ִٸ� push�ϰ� 0 ��� -> ���� ž�� ���ؼ� �����
		if (s.empty()) {
			s.push({ i,input });
			cout << "0 ";
		}
		else {
			// stack�� ����� ������ ���� �ڵ� �ݺ�
			while (!s.empty()) {
				// stack�� top�� ���̰� ���� ž�� ���̺��� Ŭ ��� -> ��, ������ ��ȣ�� ���ŵǴ� ��ġ
				if (s.top().second >= input) {
					cout << s.top().first << " ";
					s.push({ i, input });
					break;
				} 
				else { // ���� ž�� ���̰� �� ũ�� ������ pop�� ����
					s.pop();
				}
			}
			// while���� ����ǰ� stack�� ����ٸ� ������ �� �ִ� ž�� ���ٴ� ��
			if (s.empty()) {
				cout << "0 ";
				s.push({ i, input });
			}
		}
	}
	return 0;
}