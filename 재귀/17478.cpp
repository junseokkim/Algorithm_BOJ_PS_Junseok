#include <iostream>

using namespace std;

// 17478�� ����Լ��� ������? - Silver 5

int n;

void recursion(int cnt) {
	for (int j = 0; j < cnt; j++) cout << "____";
	cout << "\"����Լ��� ������?\"" << "\n";
	if (cnt == n) {
		for (int j = 0; j < cnt; j++) cout << "____";
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << "\n";
		for (int j = 0; j < cnt; j++) cout << "____";
		cout << "��� �亯�Ͽ���.\n";
		return;
	}
	for (int j = 0; j < cnt; j++) cout << "____";
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << "\n";
	for (int j = 0; j < cnt; j++) cout << "____";
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
	for (int j = 0; j < cnt; j++) cout << "____";
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	recursion(cnt + 1);
	for (int j = 0; j < cnt; j++) cout << "____";
	cout << "��� �亯�Ͽ���.\n";
}

int main() {
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
	recursion(0);
}