#include <bits/stdc++.h>
using namespace std;
//Euclidean Algorithm
// ans * b + exist number
long long hcf(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long A, B;
        cin >> A >> B;

        long long H = hcf(A, B);
        long long L = (A / H) * B;

        cout << L << " " << H << "\n";
    }
    return 0;
}
