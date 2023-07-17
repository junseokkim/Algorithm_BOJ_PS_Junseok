#include <iostream>

// gold 3

using namespace std;

int n, k;
int tower[1001] = { 0, };
int rule[100001][2] = { 0, };
int dp[1001] = { 0, };
int w;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		for (int j = 1; j <= n; j++) {
			cin >> tower[j];
		}
		for (int j = 1; j <= k; j++) {
		
		}

	}
}
/* 시간 초과
int n, k;
int tower[1001] = { 0, };
int rule[100001][2] = { 0, };
int w;
long long result = 0;
long long MAX = 0;


void find(int num) {
	bool judge = true;
	for (int i = 1; i <= k; i++) {
		if(rule[i][1] == num){
			judge = false;
			result += tower[num];
			find(rule[i][0]);
			result -= tower[num];
		}
	}
	if (judge) {
		result += tower[num];
		if (result > MAX) MAX = result;
		result -= tower[num];
	}
}


int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		MAX = 0;
		result = 0;
		cin >> n >> k;
		for (int j = 1; j <= n; j++) {
			cin >> tower[j];
		}
		for (int j = 1; j <= k; j++) {
			cin >> rule[j][0] >> rule[j][1];
		}
		cin >> w;
		find(w);
		cout << MAX << "\n";
	}
}
*/