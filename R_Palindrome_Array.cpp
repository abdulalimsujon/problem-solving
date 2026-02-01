#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<long long>& a, int l, int r) {
    if (l >= r) return true;          // base case
    if (a[l] != a[r]) return false;   // mismatch
    return isPalindrome(a, l + 1, r - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (isPalindrome(a, 0, n - 1))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
