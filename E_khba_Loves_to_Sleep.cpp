#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool can(ll D, const vector<ll>& a, ll k, ll x) {
    vector<pair<ll,ll>> bad;
    for (ll p : a) {
        ll l = max(0LL, p - D + 1);
        ll r = min(x, p + D - 1);
        if (l <= r) bad.push_back({l, r});
    }

    if (bad.empty()) return (x + 1 >= k);

    sort(bad.begin(), bad.end());
    ll freeCnt = 0;

    ll curL = bad[0].first, curR = bad[0].second;
    freeCnt += curL;

    for (int i = 1; i < (int)bad.size(); i++) {
        if (bad[i].first > curR + 1) {
            freeCnt += bad[i].first - curR - 1;
            curL = bad[i].first;
            curR = bad[i].second;
        } else {
            curR = max(curR, bad[i].second);
        }
    }

    freeCnt += x - curR;
    return freeCnt >= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        for (ll &v : a) cin >> v;

        ll lo = 0, hi = x, best = 0;
        while (lo <= hi) {
            ll mid = (lo + hi) / 2;
            if (can(mid, a, k, x)) {
                best = mid;
                lo = mid + 1;
            } else hi = mid - 1;
        }

      
        vector<pair<ll,ll>> bad;
        for (ll p : a) {
            ll l = max(0LL, p - best + 1);
            ll r = min(x, p + best - 1);
            if (l <= r) bad.push_back({l, r});
        }
        sort(bad.begin(), bad.end());

        vector<ll> ans;
        ll cur = 0;
        int idx = 0;

        while (cur <= x && (ll)ans.size() < k) {
            if (idx < (int)bad.size() && cur >= bad[idx].first && cur <= bad[idx].second) {
                cur = bad[idx].second + 1;
                idx++;
            } else {
                ans.push_back(cur);
                cur++;
            }
        }

        for (ll v : ans) cout << v << " ";
        cout << "\n";
    }
    return 0;
}
