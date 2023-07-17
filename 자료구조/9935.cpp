#include <iostream>
// gold 4
// using stack

using namespace std;

string a;
string bomb;
string tmp;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> bomb;

	int bsize = bomb.size();
	for (int i = 0; i < a.size(); i++) {
		tmp.push_back(a[i]);
		if (tmp[tmp.size() - 1] == bomb[bsize - 1]) {
			bool judge = true;
			for (int j = 0; j <= bsize; j++) {
				int idx = tmp.size() - bsize + j;
				if (tmp[idx] != bomb[j]) judge = false;
			}
			if (judge) {
				for (int j = 0; j < bsize; j++) tmp.pop_back();
			}
		}
	}
	if (tmp.empty()) cout << "FRULA";
	else cout << tmp;
}
/* time over
bool stringBomb(int pos, int pos2) {

	if (pos2 == bomb.size()) { // bomb이 존재할 때
		string front;
		string back;
		for (int i = 0; i < pos - bomb.size(); i++) {
			front.push_back(a[i]);
		}
		for (int i = pos; i < a.size(); i++) {
			back.push_back(a[i]);
		}
		a = front + back;
		return true;
	}
	for (int i = pos; i < a.size(); i++) {
		if (a[i] == bomb[pos2]) {
			return stringBomb(i + 1, pos2 + 1);
		}
	}
	return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> bomb;

	for (int i = 0; i < a.size(); i++) {

	}
	while (stringBomb(0, 0));
	if (a.size() == 0) cout << "FRULA";
	else cout << a;

}
*/
