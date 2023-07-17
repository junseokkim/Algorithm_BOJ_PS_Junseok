#include <iostream>

// gold 4

using namespace std;

int map[8][8] = { 0, };
int test[8][8] = { 0, };
int n, m;
int Min = 64;
int cnt = 1;

int x = -1;
int y = -1;
void base() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 2) {
				x = i;
				y = j;
			}
			test[i][j] = map[i][j];
		}
	}
	if (x == -1) cnt = 0;
	else cntVirus(1, 0);
}
// first = 0, left = 1, up = 2, right = 3, down = 4 
void cntVirus(int t, int dir) {
	if (dir != 1) {
		if (test[x+1][y] == 0) {
			test[x+1][y] = 3;
			x = x + 1;
			cntVirus()
		}
	}
}



int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0) {
				map[i][j] = 1;
				for (int ii = i; ii < n; ii++) {
					for (int jj = j; jj < m; jj++) {
						if (map[ii][jj] == 0) {
							map[ii][jj] = 1;
							for (int iii = ii; iii < n; iii++) {
								for (int jjj = jj; jjj < m; jjj++) {
									if (map[iii][jjj] == 0) {
										map[iii][jjj] = 1;



										map[iii][jjj] = 0;
									}
								}
							}
							map[ii][jj] = 0;
						}
					}
				}
				map[i][j] = 0;
			}
		}
	}

}