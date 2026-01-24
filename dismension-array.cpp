#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  n;
    cin >> n;

    // vector<vector<int>> v(n, vector<int>(m));
    // for (int i = 0; i < n; i++) {

    //     cin >> m;
    //     for (int j = 0; j < m; j++) {
    //         cin >> v[i][j];
    //     }
    // }

    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector<int> v2;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            v2.push_back(x);
        }
          
        for(auto x : v2) {
            cout << x << " ";
        }

         cout << '\n';
        
        v.push_back(v2);
    }
    return 0;
}
