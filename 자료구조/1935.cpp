#include <iostream>
#include <stack>
#include <iomanip>

// 후위 표기식2(Silver 3)

using namespace std;


stack<double> st;
int iarr[27] = { 0, };
string carr;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cin >> carr;
	for (int i = 0; i < n; i++) cin >> iarr[i];
	for (int i = 0; i < carr.size(); i++) {

		if (carr[i] == '-') {
			double a = st.top();
			st.pop();
			double b = st.top();
			st.pop();
			st.push(b - a);

		}
		else if (carr[i] == '+') {
			double a = st.top();
			st.pop();
			double b = st.top();
			st.pop();
			st.push(b + a);
		}
		else if (carr[i] == '*') {
			double a = st.top();
			st.pop();
			double b = st.top();
			st.pop();
			st.push(b * a);
		}
		else if (carr[i] == '/') {
			double a = st.top();
			st.pop();
			double b = st.top();
			st.pop();
			st.push(b / a);
		}
		else {
			char tmp = carr[i];
			int tmp2 = tmp - 65;
			st.push(iarr[tmp2]);
		}
	}
	cout << fixed << setprecision(2) << st.top();
}