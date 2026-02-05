#include <bits/stdc++.h>
using namespace std;

long long reach(long long s, long long e) {
    if (s > e) return 0; 
    if (s == e) return 1; 


    return reach(s + 1, e) + reach(s + 2, e) + reach(s + 3, e);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, e;
    cin >> s >> e;
    cout << reach(s, e) << "\n";

    return 0;
}
