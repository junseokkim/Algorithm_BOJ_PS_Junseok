#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// 접미사 배열(Silver 4)

using namespace std;

string a;
vector<string> arr;

int main() {
	cin >> a;

	for (int i = 0; i < a.size(); i++) {
		arr.push_back(a.substr(i, a.size() - i));
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << "\n";
	}

}