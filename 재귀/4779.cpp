#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// 4779�� ĭ��� ���� - Siver 3
int n;

// ��͸� ���� ����
void erase(vector<char> output, int cnt) {
	if (cnt == 0) {
		for (int i = 0; i < output.size(); i++) cout << output[i];
		cout << "\n";
		return;
	}
	// cnt�� ����� �������ϴ� ���� �ε����� �ٸ�
	for (int i = pow(3, cnt) / 3; i < output.size(); i += pow(3, cnt) * 2) {
		for (int j = i; j < i + pow(3, cnt) / 3; j++) output[j] = ' ';
	}
	erase(output, cnt - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (cin >> n) {
		int length = pow(3, n); // 3^n
		vector<char> output;
		for (int i = 0; i < length; i++) output.push_back('-');
		erase(output, n);
	}
}