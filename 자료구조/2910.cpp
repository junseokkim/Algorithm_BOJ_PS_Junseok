#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// 2910번 빈도 정렬 - Silver 3

vector<int> input;
// value 기준으로 비교함수 생성
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
	// input 값 받으면서 빈도 수 최신화해주기
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

	// map을 value를 기준으로 정렬하기
	// 1. map을 vector로 이동
	vector<pair<int, int>> vec(cnt.begin(), cnt.end());

	// 2. 비교함수를 이용하여 정렬
	sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec[i].second; j++) {
			cout << vec[i].first << " ";
		}
	}
	
}