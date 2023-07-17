#include <iostream>

// 피보나치 함수

using namespace std;

int cnt0, cnt1;

int fib[41][2] = { 0, };


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fib[0][0] = 1;
    fib[0][1] = 0;
    fib[1][0] = 0;
    fib[1][1] = 1;
    for (int i = 2; i <= 40; i++) {
        fib[i][0] = fib[i - 1][0] + fib[i - 2][0];
        fib[i][1] = fib[i - 1][1] + fib[i - 2][1];
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << fib[n][0] << " " << fib[n][1] << endl;
    }
}

// 시간 초과됨
/*
int fibonacci(int n) {
    if (n == 0) {
        cnt0++;
        return 0;
    }
    else if (n == 1) {
        cnt1++;
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cnt0 = 0;
        cnt1 = 0;
        int n;
        cin >> n;
        fibonacci(n);
        cout << cnt0 << " " << cnt1 << endl;
    }
}
*/