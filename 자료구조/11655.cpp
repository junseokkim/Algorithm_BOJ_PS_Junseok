#include <iostream>
#include <string>

// ROT13(Bronze 1)

using namespace std;

int main() {
	string a;
	getline(cin, a);
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= 97 && a[i] <= 122) {
			if (a[i] + 13 > 122) {
				a[i] = (a[i] - 13);
			}
			else a[i] = a[i] + 13;
		}
		else if (a[i] >= 65 && a[i] <= 90) {
			if (a[i] + 13 > 90) {
				a[i] -= 13;
			}
			else a[i] += 13;
		}
	}
	cout << a;
}