#include <iostream>
#include <stack>

using namespace std;

// 2493번 탑 (gold 5)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	// 탑 번호와 높이를 저장해주는 stack
	stack<pair<int, int>> s;
	int input;
	
	// 탑의 높이 받기
	for (int i = 1; i <= n; i++) {
		cin >> input;
		// stack이 비어있다면 push하고 0 출력 -> 최초 탑에 대해서 수행됨
		if (s.empty()) {
			s.push({ i,input });
			cout << "0 ";
		}
		else {
			// stack이 비어질 때까지 내부 코드 반복
			while (!s.empty()) {
				// stack의 top의 높이가 현재 탑의 높이보다 클 경우 -> 즉, 레이저 신호가 수신되는 위치
				if (s.top().second >= input) {
					cout << s.top().first << " ";
					s.push({ i, input });
					break;
				} 
				else { // 현재 탑의 높이가 더 크기 때문에 pop을 해줌
					s.pop();
				}
			}
			// while문이 종료되고 stack이 비었다면 수신할 수 있는 탑이 없다는 뜻
			if (s.empty()) {
				cout << "0 ";
				s.push({ i, input });
			}
		}
	}
	return 0;
}