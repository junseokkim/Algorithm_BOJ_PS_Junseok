#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 6603번 로또 - Silver 2

vector<int> result(6);

// 재귀를 통해 6개 숫자 뽑기
void find(vector<int> input, int pos, int cnt) {
	// 탈출 조건 : 6개를 뽑았을 때
	if (cnt == 6) {
		for (int i = 0; i < 6; i++) cout << result[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = pos; i < input.size(); i++) {
		result[cnt] = input[i];
		find(input, i + 1, cnt + 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {
		int get;
		cin >> get;
		if (get == 0) break;
		vector<int> input;
		for (int i = 0; i < get; i++) {
			int tmp;
			cin >> tmp;
			input.push_back(tmp);
		}
		// 입력받은 값 정렬해주기
		sort(input.begin(), input.end());
		find(input, 0, 0);
		// 띄어쓰기 안하면 에러 발생		
		cout << "\n";
	}
}