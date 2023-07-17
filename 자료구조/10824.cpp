#include <iostream>
#include <string>

// ³× ¼ö(Bronze 3)

using namespace std;

int main() {
	string arr[4];
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	string a = arr[0] + arr[1];
	string b = arr[2] + arr[3];
	long long tmp1 = stoll(a);
	long long tmp2 = stoll(b);
	cout << tmp1 + tmp2;

}