#include <iostream>

// gold 5

using namespace std;

int tree[51] = { 0, };
int child[51] = { 0, };
int rootidx;
int n;

int cnt = 0;
void dfs(int idx) {
	if (child[idx] == 0) {
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (tree[i] == idx) dfs(i);
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
		if(tree[i] != -1) child[tree[i]]++;
		else rootidx = i;
	}
	int k;
	cin >> k;
	if (k == rootidx) cout << cnt;
	else {
		child[tree[k]]--;
		tree[k] = -1;
		dfs(rootidx);
		cout << cnt;
	}
}