#include <iostream>
#include <set>

using namespace std;

// 1911번 흙길 보수하기 - Silver 1

int main() {
	int n, l;
	int result = 0;
	cin >> n >> l;
	// 웅덩이 정보 저장할 set
	set<pair<int, int>> hole;
	// 웅덩이 위치 값 받기
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		hole.insert({ a,b });
	}

	// set 위치를 알려줄 iterator
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