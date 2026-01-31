
#include <bits/stdc++.h>
using namespace std;

int digitSum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;// jodi single digit  hoile taile vagses oi single digit e dibe r double hoile vagses dibe
        x /= 10; // single hoile oi aki digit  e dibe and double hoile last digit remove korbe
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int d = digitSum(i);
        if (d >= a && d <= b) {
            sum += i;
        }
    }

    cout << sum << "\n";
    return 0;
}
