#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// 2910�� �� ���� - Silver 3

vector<int> input;
// value �������� ���Լ� ����
bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) {
		for (int i = 0; i < input.size(); i++) {
			if (input[i] == a.first) return true;
			else if(input[i] == b.first) return false;
		}
	}
	return a.second > b.second;
}

int main() {
	int n, c;
	map<int, int> cnt;
	cin >> n >> c;
	// input �� �����鼭 �� �� �ֽ�ȭ���ֱ�
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		input.push_back(tmp);
		if (cnt.find(input[i]) == cnt.end()) {
			cnt.insert(pair<int, int>(input[i],1));
		}
		else {
			cnt.at(input[i])++;
		}
	}

	// map�� value�� �������� �����ϱ�
	// 1. map�� vector�� �̵�
	vector<pair<int, int>> vec(cnt.begin(), cnt.end());

	// 2. ���Լ��� �̿��Ͽ� ����
	sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec[i].second; j++) {
			cout << vec[i].first << " ";
		}
	}
	
}