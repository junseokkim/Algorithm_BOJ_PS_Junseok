#include <iostream>
#include <string>
#include <deque>
using namespace std;

// 5430번 AC 


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		string input, fun;
		deque<int> arr;
		int n;
		bool error = false;
		bool judge = true;

		cin >> fun >> n >> input;

		// 정수값 빼오기
		for (int i = 0; i < input.size(); i++) {
			string tmp;
			while (input[i] != '[' && input[i] != ']' && input[i] != ',') {
				tmp += input[i];
				i++;
			}
			if(tmp != "") arr.push_back(stoi(tmp));

		}

		// 함수 수행
		for (int i = 0; i < fun.size(); i++) {
			if (fun[i] == 'R') {
				judge = !judge;
			}
			else {
				if (arr.empty()) {
					error = true;
					break;
				}
				if (judge) arr.pop_front();
				else arr.pop_back();
			}
		}

		if (error) cout << "error\n";
		else {
			cout << "[";
			if (judge) {
				for (int i = 0; i < arr.size(); i++) {
					cout << arr[i];
					if (i != arr.size() - 1) cout << ",";
				}
			}
			else {
				for (int i = arr.size() - 1; i >= 0; i--) {
					cout << arr[i];
					if (i != 0) cout << ",";
				}
			}
			cout << "]\n";
		}
	}
}
