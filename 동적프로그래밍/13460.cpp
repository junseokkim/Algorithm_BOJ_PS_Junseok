#include <iostream>

// gold 1

using namespace std;



pair<int, int> red;
pair<int, int> blue;
char board[11][11];
int n, m;
int result = 11;


bool shake(int cnt, int rx, int ry, int bx, int by, int dir) {
	if (cnt > 10) return false;
	else {
		if()
	}
}


int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 'R') {
				red.first = i;
				red.second = j;
			}
			if (board[i][j] == 'B') {
				blue.first = i;
				blue.second = j;
			}
		}
	}

}