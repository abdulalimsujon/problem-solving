#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1), sorted_a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sorted_a[i] = a[i];
        }

        sort(sorted_a.begin() + 1, sorted_a.end()); 

        vector<bool> visited(n + 1, false);
        bool possible = true;

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                vector<int> indices;
                int cur = i;
                while (cur <= n) {
                    indices.push_back(cur);
                    visited[cur] = true;
                    cur *= 2;
                }

                vector<int> vals_original, vals_sorted;
                for (int idx : indices) {
                    vals_original.push_back(a[idx]);
                    vals_sorted.push_back(sorted_a[idx]);
                }

                sort(vals_original.begin(), vals_original.end());
                sort(vals_sorted.begin(), vals_sorted.end());

                if (vals_original != vals_sorted) {
                    possible = false;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }

    return 0;
}
