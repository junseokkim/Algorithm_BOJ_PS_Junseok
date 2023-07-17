#include <iostream>
#include <set>

using namespace std;

// 1911�� ��� �����ϱ� - Silver 1

int main() {
	int n, l;
	int result = 0;
	cin >> n >> l;
	// ������ ���� ������ set
	set<pair<int, int>> hole;
	// ������ ��ġ �� �ޱ�
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		hole.insert({ a,b });
	}

	// set ��ġ�� �˷��� iterator
	set<pair<int, int>>::iterator iter = hole.begin();

	int x = -1;
	for (; iter != hole.end(); iter++) {
		if (x < iter->first + 1) x = iter->first + 1;
		while (x <= iter->second) {
			result++;
			x += l;
		}
	}
	cout << result;
}