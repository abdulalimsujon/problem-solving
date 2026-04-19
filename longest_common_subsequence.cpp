#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int dp[1005][1005];

int lms(int i, int j)
{
    if (i < 0 || j < 0)
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    if (s1[i] == s2[j])
    {
        return dp[i][j] = lms(i - 1, j - 1) + 1;
    }
    else
    {
        int opt1 = lms(i - 1, j);
        int opt2 = lms(i, j - 1);
        return dp[i][j] = max(opt1, opt2);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(dp, -1, sizeof(dp));
    cin >> s1 >> s2;

    cout << lms(s1.size() - 1, s2.size() - 1);

    return 0;
}
